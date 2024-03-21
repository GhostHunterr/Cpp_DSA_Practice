#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target);

int search(vector<int> &nums, int start, int end, int target);

int minSearch(vector<int> &nums);

int main()
{
    vector<int> nums = {1,3,5};
    cout << search(nums, 0);

    return 0;
}

int search(vector<int> &nums, int target)
{

    // Base Case.
    if (nums.size() == 1)
    {
        return nums[0] == target ? 0 : -1;
    }

    int min = minSearch(nums);

    if (nums[min] <= target && target <= nums[nums.size() - 1])
    {
        return search(nums, min, (nums.size() - 1), target);
    }
    else
    {
        return search(nums, 0, min - 1, target);
    }
}

int search(vector<int> &nums, int start, int end, int target)
{
    int first = start;
    int last = end;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}

int minSearch(vector<int> &nums)
{
    int first = 0;
    int last = nums.size() - 1;

    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        if (mid > 0 && nums[mid - 1] > nums[mid])
        {
            return mid;
        }
        else if (nums[first] <= nums[mid] && nums[mid] >= nums[last])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return first;
}
