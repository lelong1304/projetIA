#include "perceptron.h"
#include <vector>

class NN1{
private:
    std::vector<Perceptron> NeuralNetwork;
    int NbrPerceptron;
public:
    NN1(int,int,Fonction_activation *);
    char evaluation(Input &);
    void apprentissage(Input &, double);
};


class NN2{
private:
    std::vector<Perceptron *> Output_Layer;
    std::vector<Perceptron_cachee> Hidden_Layer;
    int NbrOutputPerceptron;
    int NbrHiddenPerceptron ;

public:
    NN2(int,int,int,Fonction_activation *);
    char evaluation(Input &);
    void apprentissage(Input &, double);

};