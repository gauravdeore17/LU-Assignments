#include <iostream>
using namespace std;

int main(){

    int year;
    cout << "Enter the year : ";
    cin >> year;

    if(year%4==0){
        cout << year << " is leap year" << endl;
    }
    else{
        cout << year << " is not leap year" << endl;
    }
    return 0;
}