//
// Created by DO THU HANG on 6/14/2021.
//

#ifndef PROJETIA_PERCEPTRON_H
#define PROJETIA_PERCEPTRON_H


#include "Input.h"
#include "Fonction_activation.h"


class Perceptron{
protected:
    double* poids;
    Fonction_activation *fonction;
    double delta;
    char label;
    int taille;
public:
    Perceptron(int,Fonction_activation *,char);
    double get_poids(int);
    double forward(Input &);
    double calcul_delta(Input &);
    double get_delta();
    void backprop(Input &, double);

};


#endif //PROJETIA_PERCEPTRON_H
