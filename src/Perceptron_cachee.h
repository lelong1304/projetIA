#include "Input.h"
#include "Perceptron.h"
#include <vector>


class Perceptron_cachee : public Perceptron{
private:
    std::vector<Perceptron *> perceptron;

public:
    Perceptron_cachee(int,Fonction_activation *,char, std::vector<Perceptron *> &);
    void calcul_delta(Input &);
    void backprop(Input &, double);
};