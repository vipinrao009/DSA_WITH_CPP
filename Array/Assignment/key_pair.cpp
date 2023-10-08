#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool twoSum(vector<int> &nums, int x)
{
    sort(nums.begin(), nums.end());
    int start = 0;
    int n = nums.size();
    int end =n-1;

    while (start <= end)
    {
        int currentSum = nums[start] + nums[end];

        if (currentSum == x)
        {
            return true;
        }
        else if (currentSum > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1,4,45,6,10,8};
    int x=16;

    bool ans =twoSum(nums,x);
    if(ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}