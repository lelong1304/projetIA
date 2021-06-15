//
// Created by DO THU HANG on 6/15/2021.
//

#include "NN2.h"
#include "Input_intermediaire.h"

using namespace std;

NN2::NN2(int taille_input, int taille_couche_sortie, int taille_couche_cachee, Fonction_activation * f_cachee, Fonction_activation * f_sortie) {
    for (int i=0; i<taille_couche_sortie; i++) {
        Perceptron *p = new Perceptron(taille_couche_cachee, f_sortie, (char) i);
        couche_sortie.push_back(p);
    }

    for (int i=0; i<taille_couche_cachee; i++) {
        Perceptron_cachee p (taille_input, f_cachee, (char) i, couche_sortie);
        couche_cachee.push_back(p);
    }

}

char NN2::evaluation(Input & input) {
    int idx=0;
    double max_valeur;
    Input_intermediaire intermediaire (input.get_label());
    for (int i=0; i<couche_cachee.size(); i++) {
        intermediaire.add(couche_cachee.at(i).forward(input));
    }

    max_valeur = couche_sortie.at(0)->forward(intermediaire);

    for (int i=1; i<couche_sortie.size(); i++) {
        double v = couche_sortie.at(i)->forward(intermediaire);
        if (v>max_valeur) {
            max_valeur = v;
            idx = i;
        }
    }
    return (char) idx;
}

void NN2::apprentissage(Input & input, double pas_de_gradient) {
    Input_intermediaire intermediaire (input.get_label());

    for (int i=0; i<couche_cachee.size(); i++) {
        intermediaire.add(couche_cachee.at(i).forward(input));
    }
    for (int i=0; i < couche_sortie.size(); i++) {
        couche_sortie.at(i)->calcul_delta(intermediaire);
    }
    for (int i=0; i < couche_cachee.size(); i++) {
        couche_cachee.at(i).calcul_delta(input);

    }
    for (int i=0; i < couche_cachee.size(); i++) {
        couche_cachee.at(i).backprop(input, pas_de_gradient);
    }
    for (int i=0; i < couche_sortie.size(); i++) {
        couche_sortie.at(i)->backprop(intermediaire, pas_de_gradient);
    }
}
