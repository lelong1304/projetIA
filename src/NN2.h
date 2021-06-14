#include "Perceptron.h"
#include "Perceptron_cachee.h"
#include <vector>


class NN2{
private:
    std::vector<Perceptron *> layer_output;
    std::vector<Perceptron_cachee> layer_hidden;
    int nb_perceptron_output;
    int nb_perceptron_hidden ;

public:
    NN2(int,int,int,Fonction_activation *);
    char evaluation(Input &);
    void apprentissage(Input &, double);

};