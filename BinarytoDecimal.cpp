#include <iostream>
using namespace std;
int main()
{
    int decimal = 0, binary, base = 1, rem;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }
    cout << "The decimal equivalent is: " << decimal << endl;
    return 0;
}