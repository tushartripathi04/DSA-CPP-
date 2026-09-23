#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;      // pointer to the first element of the array
    cout << arr << endl; // prints the address of the first element of the array
    cout << ptr << endl; // prints the address of the first element of the array
    cout << &arr[0] << endl;
    cout << *ptr << endl; // prints the value of the first element of the array
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl; // prints the value of the elements of the array
    }
for(int i = 0; i < 5; i++)
    {
        cout << arr+i << endl; // prints the value of the elements of the array
    }
    return 0;
}