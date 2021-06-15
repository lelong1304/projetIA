//
// Created by long on 15/06/2021.
//

#ifndef PROJETIA_NN2_H
#define PROJETIA_NN2_H

#include "Perceptron_cachee.h"
#include "Perceptron.h"
#include <vector>

class NN2 {
private:
    std::vector<Perceptron_cachee> couche_cachee;
    std::vector<Perceptron *> couche_sortie;
public:
    NN2 (int, int, int, Fonction_activation *, Fonction_activation *);
    char evaluation(Input &);
    void apprentissage(Input &, double);
};
#endif //PROJETIA_NN2_H
