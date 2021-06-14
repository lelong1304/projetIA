#include "Perceptron_cachee.h"

Perceptron_cachee::Perceptron_cachee(int taille, Fonction_activation * fonc, char label, vector<Perceptron *> &pr): Perceptron(taille,fonc,label) {
    perceptron = pr ;
}

void Perceptron_cachee::calcul_delta(Input &input) {
    double d = get_poids(0);
    double s;
    for (int i = 1; i < poids.size(); i++) {
        d = d + (get_poids(i) * input[i - 1]);
    }
    for(int i=0; i < perceptron.size() ; i++){
        s = (perceptron.at(i)->get_delta()) * (perceptron.at(i)->get_poids(i+1))  ;
    }
    double delta = (f->prim(d)) * s ;
    this->delta = delta;

}

void Perceptron_cachee::backprop(Input & input, double pas_de_gradient){
    for (int i=0 ;i<poids.size();i++){
        double p;
        if(i==0){
            p = get_poids(i) - (pas_de_gradient * get_delta());
        }
        else {
            p = get_poids(i) - (pas_de_gradient * input[i-1] * get_delta());
        }
        poids[i] = p;
    }
}