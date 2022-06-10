#include <iostream>
using namespace std;

int main(){

    float celsius , fahrenheit;

    cout<<"Enter the value of the celsius :";
    cin>>celsius;

    fahrenheit = ((1.8*celsius)+32);

    cout<<"The final value of the Fahrenheit :"<<fahrenheit;

    return 0;
}