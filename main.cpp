#include <iostream>
using namespace std;

int main() {
    int b = 98;
    int t = 116;
    int a = 97;
    int c = 99;

    cout
        << static_cast<char>(b)
        << static_cast<char>(t)
        << static_cast<char>(b)
        << static_cast<char>(a)
        << static_cast<char>(c)
    << endl;

    return 0;
}