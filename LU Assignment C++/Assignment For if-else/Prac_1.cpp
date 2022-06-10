#include <iostream>
using namespace std;

int main()
{

    int marks;
    cout << "Enter the Marks :";
    cin >> marks;

    if ((marks <= 100) && (marks >= 80))
    {
        cout << "Congrats You are Passed and you are in Distinction .";
    }

    else if ((marks >= 60) && (marks <= 79))
    {
        cout << "Congrats you are in First Class .";
    }
     else if ((marks >= 35) && (marks <= 59))
    {
        cout << "Congrats you are in Second Class .";
    }
     else if((marks >= 34)  && (marks < 0))
    {
        cout << " you are Fail .";
    }
    else{
        cout << "Invalid marks";
    }

    return 0;
}