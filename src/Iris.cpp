//
// Created by long on 12/06/2021.
//
#include <iostream>
#include <fstream>
#include <string>

#include "Iris.h"
using namespace std;

Iris::Iris(int index) {
    ifstream iris_input("../resources/iris_training/iris"+ to_string(index));
    if (iris_input) {
        char tmp;
        string flowerLabel;
        iris_input>>flower[0]>>tmp;
        iris_input>>flower[1]>>tmp;
        iris_input>>flower[2]>>tmp;
        iris_input>>flower[3]>>tmp;
        iris_input>>flowerLabel;
        cout<<flowerLabel<<endl;
        if(flowerLabel=="Iris-virginica"){
            set_label('1');
        }
        else if(flowerLabel=="Iris-versicolor"){
            set_label('2');
        }
        else {
            set_label('0');
        }
    } else {
        cout << "ERROR: label iris file lecture" << endl;
    }
    cout<<"label : "<<get_label()<<endl;
    iris_input.close();
}
double Iris::operator[](int index) {
    return flower[index];
}