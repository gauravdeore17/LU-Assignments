#include <iostream>
using namespace std;

int main(){

    int n = 0;
    int sqrSum = 0;
    int cubeSum = 0;
    cout << "Enter value of n : ";
    cin >> n;
    int sqr[n];
    int cbe[n];
    for (int i = 0; i < n; i++){
        sqr[i] = (i + 1) * (i + 1);
        cbe[i] = (i + 1) * (i + 1) * (i + 1);

        cout << sqr[i]<<"\t"<<cbe[i]<<endl;
        sqrSum += sqr[i];
        cubeSum += cbe[i];
    }
    cout << "The sum of the square is :"<< sqrSum;
    cout << "The sum of the cube is :" << cubeSum;

    cout << "Average of Square is : " << sqrSum / (float)n<<endl;
    cout << "Average of Cube is : " << cubeSum / (float)n<<endl;

    return 0;
}