#include <iostream>
using namespace std;

int main(){

    float num1, num2;
    char op;
    float result = 0;

    cout << "Enter the value of number 1 : ";
    cin >> num1;
    cout << "Enter the value of number 2 : ";
    cin >> num2;

    cout << "Enter the symbol : ";
    cin >> op;


    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    
    default:
        cout << "Invalid operation";
        break;
    }
    cout << "The result is : " << result << endl;

    return 0;
}