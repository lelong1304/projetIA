//
// Created by DO THU HANG on 6/15/2021.
//

#ifndef PROJETIA_INPUT_INTERMEDIAIRE_H
#define PROJETIA_INPUT_INTERMEDIAIRE_H

#include <vector>
#include "Input.h"

class Input_intermediaire : public Input {
private:
    std::vector<double> intermediaire_valeurs;

public:
    Input_intermediaire(char);
    void add(double);
    double operator[] (int);
};
#endif //PROJETIA_INPUT_INTERMEDIAIRE_H
