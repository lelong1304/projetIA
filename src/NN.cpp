#include <algorithm>
#include "NN.h"
#include <vector>


NN1::NN1(int taille , int NbrPerceptron, Fonction_activation *fonc){
    this->NbrPerceptron=NbrPerceptron;
    for(int i=0; i< NbrPerceptron; i++){
        char label='0' + i;
        NeuralNetwork.push_back(Perceptron(taille, fonc ,label));
    }
}

char NN1::evaluation(Input & input){
    std::vector<double> PerceptronValeur;
    for (int i=0; i<NbrPerceptron;i++){
        PerceptronValeur.push_back(NeuralNetwork.at(i).forward(input));
    }
    int maxElementIndex = std::max_element(PerceptronValeur.begin(),PerceptronValeur.end()) - PerceptronValeur.begin();
    char l='0' + maxElementIndex;
    return l;
}

void NN1::apprentissage(Input & input, double pas_de_gradiant){
    for (int i=0; i < NeuralNetwork.size();i++){
        NeuralNetwork.at(i).calcul_delta(input);
        NeuralNetwork.at(i).backprop(input, pas_de_gradiant);
    }
}


NN2::NN2(int taille , int NbrOutputPerceptron,int NbrHiddenPerceptron, Fonction_activation *fonc){
    this->NbrOutputPerceptron=NbrOutputPerceptron;
    this->NbrHiddenPerceptron=NbrHiddenPerceptron;
    for(int i=0; i< NbrOutputPerceptron; i++){
        char label='0' + i;
        Perceptron *p=new Perceptron(NbrHiddenPerceptron, fonc ,label);
        Output_Layer.push_back(p);
    }
    for(int i=0; i<NbrHiddenPerceptron ; i++){
        char label='0';
        Hidden_Layer.push_back(Perceptron_cachee(taille, fonc, label, Output_Layer));
    }
}

char NN2::evaluation(Input & input){
    std::vector<double> PerceptronValeur;
    Input_intermediaire  inter(input.get_label());
    for (int i=0; i<NbrHiddenPerceptron;i++){
        inter.add(Hidden_Layer.at(i).forward(input));
    }
    for (int i=0; i<NbrOutputPerceptron;i++){
        PerceptronValeur.push_back(Output_Layer.at(i)->forward(inter));
    }
    int maxElementIndex = max_element(PerceptronValeur.begin(),PerceptronValeur.end()) - PerceptronValeur.begin();
    char l='0' + maxElementIndex;
    return l;
}

void NN2::apprentissage(Input &input, double gradiant) {
    Input_intermediaire inter(input.get_label());
    for (int i = 0; i < NbrHiddenPerceptron; i++) {
        inter.add(Hidden_Layer.at(i).forward(input));
    }
    for (int i = 0; i < NbrOutputPerceptron; i++) {
        Output_Layer.at(i)->calcul_delta(inter);
    }
    for (int i = 0; i < NbrHiddenPerceptron; i++) {
        Hidden_Layer.at(i).calcul_delta(input);

    }
    for (int i = 0; i < NbrHiddenPerceptron; i++) {
        Hidden_Layer.at(i).backprop(input, gradiant);
    }
    for (int i = 0; i < NbrOutputPerceptron; i++) {
        Output_Layer.at(i)->backprop(inter, gradiant);
    }
}