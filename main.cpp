#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter your first number: ";
    cin >> a;

    cout << "Enter your second number: ";
    cin >> b;

    cout << endl;

    cout << "Here are your answers with there respective operations: " << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << "Multiplication of both numbers is: " << a * b << endl;
    cout << "Addition of both numbers is: " << a + b << endl;
    cout << "Division of both numbers is: " << a / b << endl;
    cout << "Subtraction of both numbers is: " << a - b << endl;
    cout << a << " mod " << b << " is: " << a % b << endl;



    return 0;
}