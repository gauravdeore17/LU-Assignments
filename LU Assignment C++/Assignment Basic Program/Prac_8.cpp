#include <iostream>
using namespace std;

int main(){

    int a=2;
    int b=3;
    int temp;

    // temp=a;
    // a=b;
    // b=temp;

    a =a+b;  //5
    b =a-b;  //2
    a =a-b;  //3

    cout<<"A is :"<<a<<endl;
    cout<<"B is :"<<b<<endl;
    return 0;
}