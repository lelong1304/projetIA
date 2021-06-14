//
// Created by long on 14/06/2021.
//

#ifndef PROJETIA_NN1_H
#define PROJETIA_NN1_H
#include "Fonction_activation.h"
#include "Input.h"
#include "Perceptron.h"
#include <vector>
using namespace std;

class NN1
{
private:
    vector<Perceptron *> perceptrons;
public:
    NN1(int size, int nbLabel, Fonction_activation *fonctionActivation);
    char evaluation(Input &input);
    void apprentissage(Input &input, double x);
};
#endif //PROJETIA_NN1_H
