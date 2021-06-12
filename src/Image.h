//
// Created by long on 12/06/2021.
//

#ifndef PROJETIA_IMAGE_H
#define PROJETIA_IMAGE_H
#include "Input.h"
class Image: public Input {
private:
    double pixel[1000];
public:
    Image(int index);
    virtual ~Image()= default;
    double operator[](int index);
};
#endif //PROJETIA_IMAGE_H
