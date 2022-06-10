#include <bits/stdc++.h>
using namespace std;

int main(){

    // AX^2 + BX + c = 0

    int a, b, c, x , qe;

    cout << "Enter the value of A :";
    cin >> a;
     cout << "Enter the value of B :";
    cin >> b;
     cout << "Enter the value of C :";
    cin >> c;
     cout << "Enter the value of X :";
    cin >> x;

    qe = ((a*x*x) + (b*x) + c);
    cout << "The Result of Quadratic Equation is : " << qe << endl;

    if(qe!=0)
    {
        cout << ("Eqn is Satisfy.");
    }
    else
    {
        cout << ("Eqn is not Satisfy .");
    }

    return 0;
}