#include <iostream>
using namespace std;

int main()
{

    int min , max;
    cout << "Enter the Minimum Value :";
    cin >> min;
    cout << "Enter the Maximum Value :";
    cin >> max;

    for (int i = min; i <= max;i++)
    {
        cout << i << endl;
    }
        return 0;
}