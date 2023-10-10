#include <iostream>
using namespace std;

int main() {
    double d_number = 3.4;
    int f_number = 1 - static_cast<int>(d_number);
    cout << f_number << endl;

    return 0;
}