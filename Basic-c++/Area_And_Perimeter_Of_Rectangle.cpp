# include <iostream>

using namespace std;

int main()
{
    float length;
    float width;
    float area;
    float Perimeter;
    cout << "Enter length of Rectangle: ";
    cin >> length;
    cout << "Enter width of Rectangle: ";
    cin >> width;
    area = length * width;
    Perimeter = 2*(length + width);
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << Perimeter << endl;
    return 0;    
}