//
// Created by DO THU HANG on 6/15/2021.
//

#include "Perceptron_cachee.h"

using namespace std;

Perceptron_cachee::Perceptron_cachee(int taille, Fonction_activation * fonction, char label, vector<Perceptron *> &pr): Perceptron(taille,fonction,label) {
    perceptron_sortie = pr ;
    this->taille = taille;
    this->fonction = fonction;
}

void Perceptron_cachee::calcul_delta(Input &input) {
    double p = get_poids(0);
    double s;
    for (int i = 1; i < taille; i++) {
        p += (get_poids(i) * input[i - 1]);
    }
    for(int i=0; i < perceptron_sortie.size() ; i++){
        s = (perceptron_sortie.at(i)->get_delta()) * (perceptron_sortie.at(i)->get_poids(i+1))  ;
    }
    double delta = (fonction->prim(p)) * s ;
    this->delta = delta;

}

void Perceptron_cachee::backprop(Input & input, double pas_de_gradient){
    for (int i=0 ;i<taille;i++){
        if(i==0){
            poids[i] = get_poids(i) - (pas_de_gradient * get_delta());
        }
        else {
            poids[i] = get_poids(i) - (pas_de_gradient * input[i-1] * get_delta());
        }
    }
}
