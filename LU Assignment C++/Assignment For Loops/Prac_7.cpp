#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int count = 0;
    for (int i = 2; i < 100; (i+=3)){
        cout << i << "\t";
        count++;
        sum += i;
    }
    cout <<endl<< "Sum is : " << sum << endl;
    cout << "Average is : " << sum / (float)count;
    return 0;
}