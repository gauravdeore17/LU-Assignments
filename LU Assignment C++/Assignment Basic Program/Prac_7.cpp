#include <iostream>
using namespace std;

int main(){

    int number;
    int sum = 0;
    cout<<"Enter the Number :";
    cin>>number;

   while(number > 0)
   {
       sum = (sum + (number%10));
       number = (number / 10);
   }
cout<<"The sum is :"<<sum;
    return 0;
}