//
// Created by long on 13/06/2021.
//

#include "Tanh.h"
#include "Fonction_activation.h"

Tanh::Tanh(){}
double Tanh::operator()(double val) {
    return (exp(val) - exp(-val)) / (exp(val) + exp (-val));
}

double Tanh::prim(double val) {
    return (1.0 - pow((operator()(val)),2)) ;

}