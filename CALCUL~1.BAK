#include <iostream.h>
#include <math.h>

double get_number(char* prompt) {
    double value;
    cout << prompt;
    cin >> value;
    return value;
}

void determine_result(double num1, double num2, char op) {
    switch (op) {
        case '+':
            cout << "Sum: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Difference: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Product: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Quotient: " << (num1 / num2) << endl;
            }
            break;
        case '%':
            if ((long long)num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Remainder: " << ((long long)num1 % (long long)num2) << endl;
            }
            break;
        case '^':
            cout << "Power: " << pow(num1, num2) << endl;
            break;
        case 'e':
            cout << "Exponential of sum: " << exp(num1 + num2) << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
}

int main() {
    clrscr();
    double num1, num2;
    char op;

    cout << "=== Simple Calculator ===" << endl;

    num1 = get_number("Enter the first number: ");
    num2 = get_number("Enter the second number: ");

    cout << "Enter an operator (+, -, *, /, %, ^, e): ";
    cin >> op;

    determine_result(num1, num2, op);
    getch();
    return 0;
}