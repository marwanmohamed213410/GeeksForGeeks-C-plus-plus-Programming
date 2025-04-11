# include <iostream>

using namespace std;

float num1,num2,res;
char op;

int main() {
    cout << "Enter first number:";
    cin >> num1;
    
    cout << "Enter second number:";
    cin >> num2;
    
    cout << "Enter an operator (+, -, *, /):";
    cin >> op;

    switch (op) {
    case '+':
        res = num1 + num2;
        cout << "Result = " << res;
        break;
    
    case '-':
        res = num1 - num2;
        cout << "Result = " << res;
        break;

    case '*':
        res = num1 * num2;
        cout << "Result = " << res;
        break;
    
    case '/':
        res = num1 / num2;
        cout << "Result = " << res;
        break;

    default:
        cout << "invalid operator";
        break;
    }

    
}