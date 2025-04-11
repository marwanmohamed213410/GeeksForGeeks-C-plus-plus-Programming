# include <iostream>

using namespace std;

int main()
{
    float fahrenheit;
    float celsius;

    cout << "Temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << "converting Fahrenheit scale to Celsius: " << celsius;
    return 0;
}