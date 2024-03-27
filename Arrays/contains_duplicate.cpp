#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> duplicates;
    for (int i = 0; i < nums.size(); i++)
    {
        if (duplicates.find(nums[i]) != duplicates.end())
        {
            return true;
        }
        else
        {
            duplicates[nums[i]] = 1;
        }
    }

    return false;
}

int main()
{
    vector<int> x = {1,2,3,1};
    cout << containsDuplicate(x);


    return 0;
}