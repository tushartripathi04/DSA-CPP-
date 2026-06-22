#include <iostream>
using namespace std;
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of numbers: " << sum(num1, num2, num3) << endl;
    return 0;
}