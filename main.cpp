#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int i = 5;
    long l = 5000000;
    float f = 3.4;
    double d = 3.00002;
    bool b = true;

    unsigned int ui = 5;

    auto a = 5.0;


    // expression
    cout << ui + a << endl;

    return 0;
}
