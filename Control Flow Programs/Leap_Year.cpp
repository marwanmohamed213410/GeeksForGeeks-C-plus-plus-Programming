# include <iostream>

using namespace std;

int main() 
{
    int year;

    cout << "Input the year: ";
    cin >> year;

    if(year % 400 == 0) {
        cout << "Leap year" << endl;
    }
    else if (year % 100 == 0) {
        cout << "Not Leap year" << endl;
    }
    else if (year % 4 == 0) {
        cout << "leap year" << endl;
    }
    else {
        cout << "Not Leap year" << endl;
    }
}