#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int chocoDistri(vector<int> &arr, int m)
{

	if (arr.size() == 0 || m == 0)
	{
		return 0;
	}

	sort(arr.begin(), arr.end());

	if (arr.size() < m)
	{
		return -1;
	}

	int min_diff = INT_MAX;

	for (int i = 0; i + m - 1 < arr.size(); i++)
	{
		if (min_diff > (arr[i + m - 1] - arr[i]))
		{
			min_diff = arr[i + m - 1] - arr[i];
		}
	}

	return min_diff;
}

int main()
{
	vector<int> arr = {12, 4, 7, 9, 2, 23, 25, 41, 30,
					   40, 28, 42, 30, 44, 48, 43, 50};
	cout << chocoDistri(arr, 7);

	return 0;
}