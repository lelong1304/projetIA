//
// Created by long on 13/06/2021.
//

#include "Sigmoide.h"
#include "Fonction_activation.h"

Sigmoide::Sigmoide(){}

double Sigmoide::operator()(double val) {
    return (1.0 / (1.0 + exp(-val))) ;

}

double Sigmoide::prim(double val)
{
    return operator()(val) * (1.0 - operator()(val));
}