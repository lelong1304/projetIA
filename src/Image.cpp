//
// Created by long on 12/06/2021.
//
#include <fstream>
#include <iostream>
#include <string>

#include "Image.h"
using namespace std;
string image_path = "../resources/MNIST_training/";
string label_path = "../resources/MNIST_training/train-labels.idx1-ubyte";


Image::Image(int index) {
    ifstream label_input("../resources/MNIST_training/train-labels.idx1-ubyte" , ios::in | ios::binary);
    ifstream image_input("../resources/MNIST_training/training" + to_string(index), ios::in | ios::binary);

}
double Image::operator[](int index) {
    return pixel[index];
}