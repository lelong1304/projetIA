//
// Created by long on 12/06/2021.
//

#ifndef PROJETIA_IRIS_H
#define PROJETIA_IRIS_H
#include "Input.h"
class Iris: public Input{
private:
    double flower[4];
public:
    Iris(int index);
    virtual ~ Iris()= default;
    double operator[](int index);
};
#endif //PROJETIA_IRIS_H
