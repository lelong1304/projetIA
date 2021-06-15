#include <iostream>
#include "Iris.h"
#include "Input.h"
#include "Image.h"
#include "Tanh.h"
#include "Perceptron.h"
#include "NN1.h"
#include "Apprentissage.h"
#include "Sigmoide.h"

using namespace std;
/*
int main() {
    std::cout << "Hello, World!" << std::endl;
    Iris ir(112);
    cout<<ir[1]<<" "<<ir[2]<<" "<<ir.get_label()<<endl;
    Image image(5230);
    cout<<image.get_label()<<endl;
    return 0;
}
 */

 //test Perceptron
 /*
int main() {
    Tanh* f = new Tanh();
    Perceptron* p = new Perceptron(12, f, '1');
    for (int i=0; i<12; i++) {
        cout << i << ": " << p->get_poids(i) << '\n';
    }
}
  */
void testIris() {
     Tanh* f = new Tanh();
     NN1 *nn1 = new NN1(10,7,f);
     Apprentissage<Iris,150> apprentissage (nn1);

     apprentissage.apprendre_base(15000, 0.1);
     cout << apprentissage.evaluer() << '\n';
}
 void testImage() {
     Sigmoide* f = new Sigmoide();
     NN1 *nn1 = new NN1(4,3,f);
     Apprentissage<Image,60000> apprentissage (nn1);

     apprentissage.apprendre_base(100, 1);
     cout << apprentissage.evaluer() << '\n';
}
 int main() {
    // test Iris
    //testIris();
    //test Image
    testImage();
 }
