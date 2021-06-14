//
// Created by long on 13/06/2021.
//

#ifndef PROJETIA_TANH_H
#define PROJETIA_TANH_H
#include "Fonction_activation.h"
class Tanh : public Fonction_activation{
public:
    Tanh();
    double operator()(double);
    double prim(double);
};
#endif //PROJETIA_TANH_H
