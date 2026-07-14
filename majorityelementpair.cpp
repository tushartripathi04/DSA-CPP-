#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(const vector<int> &nums, int target)
{
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> result = pairSum(nums, target);
    if (result.size() == 2)
    {
        cout << "Pair found at indices: " << result[0] << " , " << result[1] << endl;
        cout << "Values are: " << nums[result[0]] << " , " << nums[result[1]] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}
