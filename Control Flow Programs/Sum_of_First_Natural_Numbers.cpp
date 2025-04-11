# include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int sum = 0 ;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        sum = sum+i;
    }
    cout << sum << endl;
}