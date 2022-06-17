#include <iostream>
#include <math.h>
using namespace std;
//Partie 1:


int main()
{
    // Declare numbers and type of operations
    int first, second, factorial = 1;
    char operation;

    // Enter a number to do the calculation
    cout << "Enter a number and first operator : ";
    // Read first number and operation 
    cin >> first >> operation;

    if (operation == '!'){
        for(int i = 1; i <= first; ++i) {
            factorial *= i;
        }
        first = factorial;
    }
    else {
        // loop to read numbers if there is the equal sign
        while (operation != '=') {
            // enter a number for calculate
            cout << "Enter a number : ";
            // read second number
            cin >> second;

            // different case of operation
            switch (operation) {
                case '+':
                    first = first + second;
                    break;
                case '-':
                    first = first - second;
                    break;
                case '*':
                    first = first * second;
                    break;
                case '/':
                    first = first / second;
                    break;
                case '%':
                    first = first % second;
                    break;
                case '^':
                    first = pow(first, second);
                    break;
                default:
                    cout << "Input error. \n";
                    return 1;
            }
            // asking the user if he wants to calculate with more numbers
            cout << "Enter next operator, if you want the result of the calcul type '=' : ";
            // reading operator
            cin >> operation;
        }
    }
    // return to the next line
    cout << endl;
    // print result of the calcul
    cout << "The result of your calcul is : " << first << endl;
    return 0;
}

//Partie 2: 


int main()
{
    // Declare numbers and type of operations
    int first, second, factorial = 1;
    char operation;

    // Enter a number to do the calculation
    cout << "Enter a number and first operator : ";
    // Read first number and operation 
    cin >> first >> operation;

    if (operation == '!'){
        for(int i = 1; i <= first; ++i) {
            factorial *= i;
        }
        first = factorial;
    }
    else {
        // loop to read numbers if there is the equal sign
        while (operation != '=') {
            // enter a number for calculate
            cout << "Enter a number : ";
            // read second number
            cin >> second;

            // different case of operation
            switch (operation) {
                case '+':
                    first = first + second;
                    break;
                case '-':
                    first = first - second;
                    break;
                case '*':
                    first = first * second;
                    break;
                case '/':
                    first = first / second;
                    break;
                case '%':
                    first = first % second;
                    break;
                case '^':
                    first = pow(first, second);
                    break;
                default:
                    cout << "Input error. \n";
                    return 1;
            }
            
            // asking the user if he wants to calculate with more numbers
            cout << "Enter next operator, if you want the result of the calcul type '=' : ";
            // reading operator
            cin >> operation;
            switch (operation) {
                case '+' and '*':
                    first = first * second; // if we have + and * do the operation * in first and next the addition
                    break;
                case '+' :
                    first = first + second;
                    break;
        }
    }
    // return to the next line
    cout << endl;
    // print result of the calcul
    cout << "The result of your calcul is : " << first << endl;
    return 0;
}
