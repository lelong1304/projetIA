//
// Created by long on 13/06/2021.
//

#ifndef PROJETIA_FONCTION_ACTIVATION_H
#define PROJETIA_FONCTION_ACTIVATION_H
#include "math.h"

class Fonction_activation{
public:
    virtual double operator()(double)=0;
    virtual double prim(double)=0;
};
#endif //PROJETIA_FONCTION_ACTIVATION_H
