#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double length , width , area , perimeter , diagonal;
    

    cout << "Enter the Length of the Rectangle :" << endl;
    cin >> length;

    cout << "Enter the Width of the Rectangle :" << endl;
    cin >> width;

    area = length * width;
    perimeter = (length + width) * 2;
    diagonal =sqrt((length*length) + (width*width));

    cout << "Area of the Rectangle is :" << area<<endl;
    cout << " Perimeter of the Rectangle is :" << perimeter<<endl;
     cout << " Diagonal of the Rectangle is :" << diagonal<<endl;


    return 0;
}