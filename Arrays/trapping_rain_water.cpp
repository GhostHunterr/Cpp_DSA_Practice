#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    if (n <= 2)
    {
        return 0;
    }

    int total = 0;
    vector<int> leftMax(n);
    vector<int> rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int waterLevel = min(leftMax[i], rightMax[i]) - height[i];
        total += waterLevel < 0 ? 0 : waterLevel;
    }

    return total;
}

int main()
{
    vector<int> height = {4,2,0,3,2,5};
    cout << trap(height);
    return 0;
}