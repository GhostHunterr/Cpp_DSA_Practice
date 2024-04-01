#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int x = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    return x;
}

int main()
{

    return 0;
}
