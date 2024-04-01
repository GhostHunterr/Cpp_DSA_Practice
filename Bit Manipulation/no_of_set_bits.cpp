#include <iostream>

using namespace std;

int noOfSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n = (n >> 1);
    }
    return count;
}

int main()
{
    cout << noOfSetBits(4);
    return 0;
}