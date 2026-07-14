#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        //  ab hmm sort krenge
        sort(nums.begin(), nums.end());
        // frequency count krne k liye hm ek variable bna lenge
        int count = 1;
        int ans = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count > n / 2)
            {
                return nums[i];
            }
        }
        return ans;
    }
};
int main()
{
    solution sol;
    vector<int> nums = {2, 2, 2, 1, 2, 1, 2};
    cout << sol.majorityElement(nums);
    return 0;
}