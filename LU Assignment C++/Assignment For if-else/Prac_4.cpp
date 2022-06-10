#include <iostream>
using namespace std;

int main(){


    int n1, n2, n3;
    cout << "Enter the value of n1 : ";
    cin >> n1;
    cout << "Enter the value of n2 : ";
    cin >> n2;
    cout << "Enter the value of n3 : ";
    cin >> n3;

    (n1 > n2 && n1 > n3)?cout << "n1 is maximum":cout<<"";
    (n2 > n1 && n2 > n3)?cout << "n2 is maximum":cout<<"";
    (n3 > n2 && n3 > n1)?cout << "n3 is maximum":cout<<"";

    return 0;
}