//
// Created by long on 15/06/2021.
//

#ifndef PROJETIA_PERCEPTRON_CACHEE_H
#define PROJETIA_PERCEPTRON_CACHEE_H
#include "Input.h"
#include "Perceptron.h"
#include <vector>


class Perceptron_cachee : public Perceptron {
private:
    std::vector<Perceptron *> perceptron_sortie;

public:
    Perceptron_cachee(int,Fonction_activation *,char, std::vector<Perceptron *> &);
    void calcul_delta(Input &);
    void backprop(Input &, double);
};

#endif //PROJETIA_PERCEPTRON_CACHEE_H
