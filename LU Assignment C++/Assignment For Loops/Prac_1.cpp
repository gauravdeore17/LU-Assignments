#include <bits/stdc++.h>
using namespace std;

int main(){

    //int n , i=1;
    int n, i , sum=0 ;
    float avg=0;

    cout << "Enter the Number :";
    cin >> n;

//    do
//    {
//        cout << i<<endl;
//        ;
//        i++;
//    } while (i<=n);

    for (i = 1; i <= n;i++)
    {
        cout << i << endl;
        sum = sum + i;
        
    }
    cout << "Sum is :"<<sum << endl;
    avg = sum / (float)n;
    cout << "Average is :" << avg << endl;
    return 0;
}