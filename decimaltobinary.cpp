#include <iostream>
using namespace std;
int main()
{
    int binary[32], decimal, i = 0;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    if (decimal < 0)
    {
        cout << "Decimal number cannot be negative." << endl;
        return 1;
    }
    else if (decimal == 0)
    {
        cout << "The decimal equivalent of binary 0 is: 0" << endl;
        return 0;
    }
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    cout << "binary equivalent is: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}