#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;
    char choice;

    do {
       // Cear Screen
        system("clear");    

        cout << "====================================" << endl;
        cout << "          SIMPLE CALCULATOR         " << endl;
        cout << "====================================" << endl;
        cout << "Operations available:" << endl;
        cout << "  +  : Addition" << endl;
        cout << "  -  : Subtraction" << endl;
        cout << "  *  : Multiplication" << endl;
        cout << "  /  : Division" << endl;
        cout << "====================================" << endl;

        // Take the input
        cout << "\nEnter first number  : ";
        cin >> num1;

        cout << "Enter operator (+ - * /): ";
        cin >> op;

        cout << "Enter second number : ";
        cin >> num2;

        // Use Switc case for perform calculation
        switch (op) {
            case '+':
                result = num1 + num2;
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
                break;

            case '-':
                result = num1 - num2;
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
                break;

            case '*':
                result = num1 * num2;
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "\nError: Division by zero is not allowed!" << endl;
                }
                break;

            default:
                cout << "\nError: Invalid operator!" << endl;
        }

       
        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator. Goodbye!\n" << endl;

    return 0;
}