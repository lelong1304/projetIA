#include <iostream>
#include "Iris.h"
#include "Input.h"
#include "Image.h"
#include "Tanh.h"
#include "Perceptron.h"

using namespace std;
/*
int main() {
    std::cout << "Hello, World!" << std::endl;
    Iris ir(112);
    cout<<ir[1]<<" "<<ir[2]<<" "<<ir.get_label()<<endl;
    Image image(120);
    cout<<image.get_label()<<endl;
    return 0;
}
*/
 //test Perceptron
int main() {
    Tanh* f = new Tanh();
    Perceptron* p = new Perceptron(12, f, '1');
    for (int i=0; i<12; i++) {
        cout << i << ": " << p->get_poids(i) << '\n';
    }
}
