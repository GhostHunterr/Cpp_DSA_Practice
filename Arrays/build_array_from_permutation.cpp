#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main()
{
    return 0;
}