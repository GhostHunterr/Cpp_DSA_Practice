#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void nextPermutation(vector<int> &nums)
{
	int n = nums.size();
	int dip = -1;

	for (int i = n - 2; i >= 0; i--)
	{
		if (nums[i] < nums[i + 1])
		{
			dip = i;
			break;
		}
	}

	// Edge Case
	if (dip == -1)
	{
		reverse(nums.begin(), nums.end());
		return;
	}

    //Find the smallest out of the nums bigger than dip
	for (int i = n - 1; i > dip; i--)
	{
		if (nums[i] > nums[dip])
		{
			swap(nums[i], nums[dip]);
			break;
		}
	}

    //reverse the remaining array.
	reverse(nums.begin() + dip + 1, nums.end());
}

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5};
	nextPermutation(nums);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}