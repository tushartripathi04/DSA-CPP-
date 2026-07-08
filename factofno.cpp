#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        cout << "Factorial of " << i << " is: " << fact << endl;
    }

    return 0;
}
