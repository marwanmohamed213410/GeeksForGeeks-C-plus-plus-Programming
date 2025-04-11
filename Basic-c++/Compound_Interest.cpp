# include <iostream>
# include <math.h>

using namespace std;

int main()
{
    float P;
    float R;
    float T;
    float Amount = 0;
    float compoundInterest = 0;
    cout << "Enter the principal amount (P): ";
    cin >> P;
    cout << "Enter the time (T): ";
    cin >> T;
    cout << "Enter the rate (R): ";
    cin >> R;
    Amount = P* pow(1 + R/100, T);
    compoundInterest =  Amount - P;
    cout << "Compound Interest = " << compoundInterest;
    return 0;
}