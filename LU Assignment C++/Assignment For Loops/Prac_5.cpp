#include <iostream>
using namespace std;

int main()
{

    int x, y, sum = 0;
    float avg = 0;
    int count = 0;
    cout << "Enter the First Value :";
    cin >> x;
    cout << "Enter the Second Value :";
    cin >> y;

    for (int i = x; i <= y; i++)
    {
        cout << i << endl;
        sum = sum + i;
        count++;
    }
    cout << "Sum of all Number is :" << sum << endl;
    avg = sum / (float)count;
    cout << "Average of these Numbers is :" << avg << endl;
    return 0;
}