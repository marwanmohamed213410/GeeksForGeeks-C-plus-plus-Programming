# include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int rev_num = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    
    cout << "Reverse a Number is: " <<rev_num;
}