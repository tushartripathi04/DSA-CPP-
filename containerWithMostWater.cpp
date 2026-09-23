
// BRUTE FORCE APPROACH

#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int i, j;
    int maxArea(vector<int> &height)
    {
        int maxWater = 0;
        for (i = 0; i < height.size(); i++)
        {
            for (j = i + 1; j < height.size(); j++)
            {
                int water = min(height[i], height[j]) * (j - i);
                maxWater = max(maxWater, water);
            }
        }
        return maxWater;
    }
};

int main()
{
    solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << sol.maxArea(height);
    return 0;
}

//     *OPTIMAL APPROACH*
/*

class Solution
{
public:
    int maxArea(vector<int> &height){
        int lp = 0;
        int rp = height.size() - 1;
        while (lp < rp)
        {
            int w = rp - lp;
            int h = min(height[lp], height[rp]);
            int area = w * h;
            maxWater = max(maxWater, area);
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
}; */