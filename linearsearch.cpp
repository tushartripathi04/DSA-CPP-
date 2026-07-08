#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 40, 30, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int index = linearSearch(arr, size, key);
    if (index == -1)
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Key found at index: " << index << endl;
    }
    return 0;
}