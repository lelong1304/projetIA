//
// Created by long on 13/06/2021.
//

#ifndef PROJETIA_SIGMOIDE_H
#define PROJETIA_SIGMOIDE_H
#include "Fonction_activation.h"

class Sigmoide : public Fonction_activation{
public:
    Sigmoide();
    double operator()(double);
    double prim(double);
};
#endif //PROJETIA_SIGMOIDE_H
