#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                continue;
            }
            else
            {
                nums[i] = nums[i]+nums[i-1];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {3,1,2,10,1};

    s1.runningSum(nums);
}