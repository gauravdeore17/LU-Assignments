#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, avg = 0, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;
    string even;
    string odd;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            even = " " + even + " " + to_string(i);
            evenCount++;
            sumEven = sumEven + i;
        }
        else
        {
            odd = " " + odd + " " + to_string(i);
            oddCount++;
            sumOdd = sumOdd + i;
        }
    }
    sum = sumEven + sumOdd;
    cout << "The sum is :" << sum << endl;

    cout << "The Average is :" << sum / (float)(oddCount + evenCount) << endl;
    cout << evenCount << endl;
    cout << oddCount << endl;
    return 0;
}