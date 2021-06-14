//
// Created by DO THU HANG on 6/14/2021.
//

#include "Perceptron.h"
#include <stdlib.h>
#include <time.h>
#include <array>
using namespace std;

Perceptron::Perceptron(int taille, Fonction_activation * fonction, char label){
    this->taille = taille;
    this->poids = new double[taille];
    this->fonction = fonction;
    this->label = label;
    this->delta = 0;
    srand(time(NULL));
    for(int i=0; i<taille; i++){
        int rd= rand() % 3 - 1.;
        poids[i] = (double) rd;
    }

}

double Perceptron::get_poids(int i){
    return poids[i];
}


double Perceptron::forward(Input & input){
    double p=get_poids(0);
    for(int i=1; i<taille;i++){
        p += (get_poids(i)* input[i-1] );
    }
    return fonction->operator ()(p);

}

double Perceptron::calcul_delta(Input &input) {
    double p = get_poids(0);
    double y;
    for (int i = 1; i < taille; i++) {
        p += (get_poids(i) * input[i - 1]);
    }
    if (input.get_label() == this->label) {
        y = 1;
    } else {
        y = 0;
    }
    double delta_ = (fonction->prim(p)) * (forward(input) - y);
    this->delta = delta_;
    return delta_;
}

double Perceptron::get_delta(){
    return delta;
}

void Perceptron::backprop(Input & input, double pas_de_gradient){
    for (int i=0 ;i<taille;i++){
        if(i==0){
            poids[i] = get_poids(i) - (pas_de_gradient * get_delta());
        }
        else {
            poids[i] = get_poids(i) - (pas_de_gradient * input[i-1] * get_delta());
        }
    }
}

char Perceptron::getLabel() {
    return label;
}