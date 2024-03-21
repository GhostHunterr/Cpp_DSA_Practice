#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = nums[0];
    int currSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        if (maxSum < currSum)
        {
            maxSum = currSum;
        }
        currSum = (currSum < 0) ? 0 : currSum;
    }

    return maxSum;
}

int main()
{
    
    return 0;
}