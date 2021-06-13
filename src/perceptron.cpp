#include "perceptron.h"
#include <stdlib.h>
#include <time.h>  
using namespace std;

Perceptron::Perceptron(int taille, Fonction_activation * fonc, char label){
	this->poids=new double[taille];
    this->f=fonc;
    this->label=label;
    this->delta=0;
    srand(time(NULL));
    for(int i=0;i<=taille;i++){
        int rd= rand() % 3 - 1;
        double d=(double)rd;
        poids[i] = d;
    }

}

Fonction_activation * Perceptron::getF(){
    return f;
}

void Perceptron::setDelta(double delta) {
    this->delta = delta;
}

double Perceptron::get_poids(int i){
    return poids[i];
}

void Perceptron::insertPoid(double p, int i) {
    this->poids.at(i) = p;
}

int Perceptron::get_size(){
    return poids.size();
}


double Perceptron::forward(Input & input){
    double d=get_poids(0);
    for(int i=1; i<poids.size();i++){
        d = d + (get_poids(i)* input[i-1] );
    }
    return f->operator ()(d);

}

double Perceptron::calcul_delta(Input &input) {
    double d = get_poids(0);
    double y;
    for (int i = 1; i < poids.size(); i++) {
        d = d + (get_poids(i) * input[i - 1]);
    }
    if (in.get_label() == this->label) {
        y = 1;
    } else {
        y = 0;
    }
    delta_ = (f->prim(d)) * (forward(in) - y);
	this->delta = delta_;
	return delta_;
}

double Perceptron::get_delta(){
    return delta;
}

void Perceptron::backprop(Input & input, double pas_de_gradient){
    for (int i=0 ;i<this->poids.size();i++){
        if(i==0){
            get_poids[i] = get_poids(i) - (pas_de_gradient * get_delta());
        }
        else {
            get_poids[i] = get_poids(i) - (pas_de_gradient * input[i-1] * get_delta());
        }
    }
}


Perceptron_cachee::Perceptron_cachee(int taille, Fonction_activation * fonc, char label, vector<Perceptron *> &pr): Perceptron(taille,fonc,label) {
    percept = pr ;
}

void Perceptron_cachee::calcul_delta(Input &in) {
    double d = get_poids(0);
    double s;
    for (int i = 1; i < get_size(); i++) {
        d = d + (get_poids(i) * in[i - 1]);
    }
    for(int i=0; i < percept.size() ; i++){
        s = (percept.at(i)->get_delta()) * (percept.at(i)->get_poids(i+1))  ;
    }
    double delta = (getF()->prim(d)) * s ;
    setDelta(delta);

}

void Perceptron_cachee::backprop(Input & in, double pas_de_gradient){
    for (int i=0 ;i<get_size();i++){
        double p;
        if(i==0){
            p = get_poids(i) - (pas_de_gradient * get_delta());
        }
        else {
            p = get_poids(i) - (pas_de_gradient * in[i-1] * get_delta());
        }
        insertPoid(p, i);
    }
}