# include <iostream>

using namespace std;

int GCD (int num1, int num2);
int num1,num2;

int main() {
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    
    cout <<"Result: "<<GCD(num1, num2);
}

int GCD (int num1, int num2) {
    if(num1==0)
        return num2;
    if(num2==0)
        return num1;
    if(num1==num2)
        return num1;
    
    if (num1 > num2)
      return GCD(num1 - num2, num2);
    if (num2 > num1)
      return GCD(num1, num2 - num1);
}