//
// Created by long on 12/06/2021.
//
#include <fstream>
#include <iostream>
#include <string>

#include "Image.h"
using namespace std;
const int PIXEL_SIZE = 28;

Image::Image(int index) {
    ifstream label_input("../resources/train-label/train-labels.idx1-ubyte" , ios::in | ios::binary);
    ifstream image_input("../resources/MNIST_training/training" + to_string(index), ios::in | ios::binary);
    unsigned char tmp;
    if (label_input.is_open()) {
        label_input.seekg(8+index, label_input.cur);
        label_input.read((char*) &tmp, sizeof(unsigned char));
        int label_tmp = (int) tmp;
        char lab = label_tmp + '0';
        set_label(lab);
        label_input.close();
    } else {
        cout << "ERROR: label image lecture" << endl;
    }
    if (image_input.is_open()) {
        image_input.seekg(1078,image_input.cur);
        // Image contains 28*28 pixels
        for (int i = 0; i < PIXEL_SIZE; i++) {
            for (int j = 0; j < PIXEL_SIZE; j++) {
                int pixel_index = i * PIXEL_SIZE + j;
                image_input.read((char*) &tmp, sizeof(unsigned char));
                pixel[pixel_index] = double (tmp);
            }
        }
        image_input.close();
        /*
        for (int i = 189; i < 300; i++) {
            cout<<pixel[i]<<" ";
        }*/ //show pixel exemple
    } else {
        cout << "ERROR: image file lecture" << endl;
    }

}
double Image::operator[](int index) {
    return pixel[index];
}