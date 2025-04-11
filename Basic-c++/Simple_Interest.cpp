# include <iostream>

using namespace std;

int main()
{
    float P;
    float R;
    float T;
    float simpleInterest;

    cout << "Enter the principal amount (P): ";
    cin >> P;
    cout << "Enter the time (T): ";
    cin >> T;
    cout << "Enter the rate (R): ";
    cin >> R;
    simpleInterest = (P * T * R) / 100;
    cout << "Simple Interest = " << simpleInterest;
    return 0;
}