//
// Created by long on 15/06/2021.
//

#ifndef PROJETIA_APPRENTISSAGE2_H
#define PROJETIA_APPRENTISSAGE2_H
template<class I, class NN, int Nb> class Apprentissage2 {
private:
    NN *nn;
public:
    Apprentissage2(NN *nn);
    void apprendre_base(int K, double pas_de_gradient);
    int evaluer();
};
#include "Apprentissage2.tpp"
#endif //PROJETIA_APPRENTISSAGE2_H
