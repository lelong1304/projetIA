#include <algorithm>
#include "NN1.h"
#include <vector>
#include "Fonction_activation.h"

using namespace std;


NN1::NN1(int taille_nodes, int taille_perceptron, Fonction_activation *fonc){
    this->taille_nodes=taille_nodes;
    for(int i=0; i< taille_nodes; i++){
        char label='0' + i;
        nodes.push_back(Perceptron(taille_perceptron, fonc ,label));
    }
}

char NN1::evaluation(Input & input){
    std::vector<double> perceptron_valeur;
    for (int i=0; i<taille_nodes;i++){
        perceptron_valeur.push_back(nodes.at(i).forward(input));
    }
    int maxElementIndex = max_element(perceptron_valeur.begin(),perceptron_valeur.end()) - perceptron_valeur.begin();
    char l='0' + maxElementIndex;
    return l;
}

void NN1::apprentissage(Input & input, double pas_de_gradiant){
    for (int i=0; i < nodes.size();i++){
        nodes.at(i).calcul_delta(input);
        nodes.at(i).backprop(input, pas_de_gradiant);
    }
}

