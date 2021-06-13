#include <math.h>

class Fonction_activation {
public:
    virtual double operator()(double)=0;
    virtual double prim(double)=0;
};

class Tanh : public Fonction_activation{
public:
    double operator()(double);
    double prim(double);
};

class Sigmoide : public Fonction_activation{
public:
    double operator()(double);
    double prim(double);
};


