#include <iostream>
using namespace std;

int main(){

    int n, i, sumSquare , sumCube;

    cout << "Enter the Value:";
    cin >> n;
    int square[n];
    int cube[n];
    for (i = 0; i < n;i++)
    {

        square[i] = (i + 1) * (i + 1);
        cube[i] = (i + 1) * (i + 1) * (i + 1);
        cout << square[i] <<"\t"<< cube[i]<<endl;

        sumSquare = sumSquare + square[i];
        sumCube = sumCube + cube[i];
    }

    cout << "Average of the square is :" << sumSquare/n << endl;
    cout << "Average of the Cube is :" << sumCube / n << endl;
    return 0;
}