# include <iostream>

using namespace std;

int main()
{
    int num = 0;
    long int factorial = 1;
    cout << "Enter Number: ";
    cin >> num;
    if(num <= 0)
    {
        cout << num << " is not Natural number";
    }
    else{
        for(int i = 1; i<=num; i++)
        {
            factorial *= i;
        }
            cout << factorial;
            }
}