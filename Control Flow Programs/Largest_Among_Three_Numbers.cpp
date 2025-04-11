# include <iostream>

using namespace std;

int main()
{
    int x, y ,z;
    cout <<"Enter first number: ";
    cin >> x;
    cout <<"Enter second number: ";
    cin >> y;
    cout <<"Enter third number: ";
    cin >> z;

    if(x>y && x>z)
    {
        cout << x << " is the largest number" << endl;
    }
    else if(y>x && y>z)
    {
        cout << y << " is the largest number" << endl;
    }
    else
    {
        cout << z << " is the larget number" << endl;
    }
}