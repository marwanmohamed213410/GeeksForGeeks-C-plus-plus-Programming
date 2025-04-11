# include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
    
    if(num==0)
    {
        cout << "0 is not even or odd" << endl;
    }
    else if(num%2==0)
    {
        cout<< "Even number" << endl;
    }
    else{
        cout << "odd number" << endl;
    }
}