#include <iostream>
#include "Iris.h"
#include "Input.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Iris ir(112);
    cout<<ir[1]<<" "<<ir[2]<<" "<<ir.get_label()<<endl;
    return 0;
}
