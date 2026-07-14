#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n)
{
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum Subarray Sum = " << maxSubArray(arr, n);

    return 0;
}