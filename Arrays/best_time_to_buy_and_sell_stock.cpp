#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyPrices = prices[0];
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (buyPrices < prices[i])
        {
            maxProfit = max(maxProfit, prices[i] - buyPrices);
        }
        else
        {
            buyPrices = prices[i];
        }
    }

    return maxProfit;
}

int main()
{

    return 0;
}