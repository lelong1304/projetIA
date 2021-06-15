//
// Created by long on 14/06/2021.
//
#include <iostream>
#include <fstream>
#include <string>
#include "math.h"
#include "NN1.h"
#include "Tanh.h"

NN1::NN1(int size, int nbLabel, Fonction_activation *fonctionActivation) {
    srand(time(NULL));
    for(int i=0; i<nbLabel; i++){
        perceptrons.push_back(new Perceptron(size, fonctionActivation, '0'+i));
    }
}
char NN1::evaluation(Input &input) {
    char res = '0';
    int length = perceptrons.size();
    double best = -10000, tmp;
    for (int i=0; i<length;i++){
        tmp = perceptrons[i]->forward(input);
        if (best<tmp) {
            best = tmp;
            res = res + i;
        }
    }
    return res;
}

void NN1::apprentissage(Input &input, double x) {
    int length = perceptrons.size();
    for (int i=0; i<length;i++){
        perceptrons[i]->calcul_delta(input);
        perceptrons[i]->backprop(input, x);
        //cout << "Perceptron:" << perceptrons[i]->getLabel() << ", Input label:" << input.get_label() << endl;
    }
}