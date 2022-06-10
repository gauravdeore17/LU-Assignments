#include <iostream>
using namespace std;

int main()
{

    int x=0, y=0, sum = 0, evenCount = 0, oddCount = 0, sumEven =0, sumOdd=0;
    float avg = 0;
    
    cout << "Enter the First Value :";
    cin >> x;
    cout << "Enter the Second Value :";
    cin >> y;
    string even;
    string odd;
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            even = even + " " + to_string(i) ;
            evenCount++;
        sumEven = sumEven + i;
        }
        else
        {
            odd = odd + " " + to_string(i);
            oddCount++;
        sumOdd = sumOdd + i;
        }
    }
    cout << "Even numbers are :" << even << endl;
    cout << "Odd numbers are :" << odd << endl;
    cout << "Sum of All Numbers :" << (sumEven+sumOdd) << endl;

     avg = ((sumEven + sumOdd) /(float) (oddCount + evenCount));
    cout << "Average of these Numbers is :" << avg << endl;
    return 0;
}