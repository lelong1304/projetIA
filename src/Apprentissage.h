//
// Created by DO THU HANG on 6/15/2021.
//

#ifndef PROJETIA_APPRENTISSAGE_H
#define PROJETIA_APPRENTISSAGE_H

#include "NN1.h"
#include <time.h>
#include <stdlib.h>

template<class I, int Nb> class Apprentissage {
private:
    NN1 * nn;
public:
    Apprentissage(NN1 * nn1);
    void apprendre_base(int K, double pas_de_gradient);
    int evaluer();
};


#include "Apprentissage.tpp"
#endif //PROJETIA_APPRENTISSAGE_H
