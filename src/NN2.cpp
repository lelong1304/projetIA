#include <algorithm>
#include "NN2.h"
#include <vector>
#include "Fonction_activation.h"

using namespace std;


NN2::NN2(int taille , int nb_perceptron_output,int nb_perceptron_hidden, Fonction_activation *fonc){
    this->nb_perceptron_output = nb_perceptron_output;
    this->nb_perceptron_hidden = nb_perceptron_hidden;
    for(int i=0; i< nb_perceptron_output; i++){
        char label='0' + i;
        Perceptron *p=new Perceptron(nb_perceptron_hidden, fonc ,label);
        layer_output.push_back(p);
    }
    for(int i=0; i<nb_perceptron_hidden ; i++){
        char label='0';
        layer_hidden.push_back(Perceptron_cachee(taille, fonc, label, layer_output));
    }
}

char NN2::evaluation(Input & input){
    vector<double> PerceptronValeur;
    Input_intermediare intermediare(input.get_label());
    for (int i=0; i<nb_perceptron_hidden;i++){
        intermediare.add(layer_hidden.at(i).forward(input));
    }
    for (int i=0; i<nb_perceptron_output;i++){
        PerceptronValeur.push_back(layer_output.at(i)->forward(intermediare));
    }
    int maxElementIndex = max_element(PerceptronValeur.begin(),PerceptronValeur.end()) - PerceptronValeur.begin();
    char l='0' + maxElementIndex;
    return l;
}

void NN2::apprentissage(Input &input, double gradiant) {
    Input_intermediare intermediare(input.get_label());
    for (int i = 0; i < nb_perceptron_hidden; i++) {
        intermediare.add(layer_hidden.at(i).forward(input));
    }
    for (int i = 0; i < nb_perceptron_output; i++) {
        layer_output.at(i)->calcul_delta(intermediare);
    }
    for (int i = 0; i < nb_perceptron_hidden; i++) {
        layer_hidden.at(i).calcul_delta(input);

    }
    for (int i = 0; i < nb_perceptron_hidden; i++) {
        layer_hidden.at(i).backprop(input, gradiant);
    }
    for (int i = 0; i < nb_perceptron_output; i++) {
        layer_output.at(i)->backprop(intermediare, gradiant);
    }
}