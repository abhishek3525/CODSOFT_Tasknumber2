#include <iostream>
using namespace std;

int main() {
    char operation;
    double number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << number1 << " + " << number2 << " = " << (number1 + number2) << endl;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << (number1 - number2) << endl;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << (number1 * number2) << endl;
            break;
        case '/':
            if (number2 != 0) {
                cout << number1 << " / " << number2 << " = " << (number1 / number2) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please enter one of these operations +, -, *, /" << endl;
            break;
    }

    return 0;
}