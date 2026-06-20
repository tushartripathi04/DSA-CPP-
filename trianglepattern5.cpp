
// C++ program to print the number triangle pattern

#include <iostream>
using namespace std;
int main()
{
    int n;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}