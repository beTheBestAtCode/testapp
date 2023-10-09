#include <iostream>
#include <typeinfo>

int main() {
    int i = 5;
    long l = 5000000;
    float f = 3.4;
    double d = 3.00002;
    bool b = true;

    unsigned int ui = 5;

    auto a = 5.0;


    // question during the tutorial
    auto var = 625;
    std::cout << typeid(var).name() << "\n"; // gives out "i" which means integer

    return 0;
}
