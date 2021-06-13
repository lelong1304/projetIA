#include "fonction.h"
#include "Input.h"


class Perceptron{
private:
    std::double* poids;
    Fonction_activation *f;
    double delta;
    char label;
public:
    Perceptron(int,Fonction_activation *,char);
    double get_poids(int);
    double forward(Input &);
    void calcul_delta(Input &);
    double get_delta();
    void backprop(Input &, double);
    int get_size();
    Fonction_activation * getF();
    void setDelta(double);
    void insertPoid(double,int);

};


class Perceptron_cachee : public Perceptron{
private:
    std::vector<Perceptron *> percept;

public:
    Perceptron_cachee(int,Fonction_activation *,char, std::vector<Perceptron *> &);
    void calcul_delta(Input &);
    void backprop(Input &, double);
};