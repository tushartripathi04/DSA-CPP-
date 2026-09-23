#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = secondLargest(arr, n);

    if (ans == -1)
        cout << "Second largest element does not exist.";
    else
        cout << "Second largest element = " << ans;

    return 0;
}