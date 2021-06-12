//
// Created by long on 12/06/2021.
//

#ifndef PROJETIA_INPUT_H
#define PROJETIA_INPUT_H

class Input{
private:
    char label{};
public:
    char get_label();
    void set_label(char);
    virtual ~Input()= default;
    virtual double operator[](int)=0;
};

#endif //PROJETIA_INPUT_H
