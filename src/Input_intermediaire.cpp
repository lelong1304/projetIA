//
// Created by DO THU HANG on 6/15/2021.
//

#include "Input_intermediaire.h"

Input_intermediaire::Input_intermediaire(char label) {
    set_label(label);
}

void Input_intermediaire::add(double x) {
    intermediaire_valeurs.push_back(x);
}

double Input_intermediaire::operator[] (int i) {
    intermediaire_valeurs.at(i);
}