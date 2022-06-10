#include <iostream>
using namespace std;

int main()
{

    char alpha;
    cout << "Enter an alphabet : ";
    alpha = getchar();

    // condition for uppercase to lowercase
    if (alpha <= 90 && alpha >= 65)
    {
        putchar(alpha + 32);
    }
    // condition for lowercase to uppercase
    else if (alpha <= 122 && alpha >= 97)
    {
        putchar(alpha - 32);
    }
    else
    {
        cout << "Invalid alphabet";
    }

    return 0;
}