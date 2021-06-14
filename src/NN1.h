#include "Perceptron.h"
#include <vector>

class NN1{
private:
    std::vector<Perceptron> nodes;
    int taille_nodes;
public:
    NN1(int,int,Fonction_activation *);
    char evaluation(Input &);
    void apprentissage(Input &, double);
};
