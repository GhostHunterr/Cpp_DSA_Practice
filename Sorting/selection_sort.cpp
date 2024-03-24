#include <iostream>

using namespace std;

void selectionSort(int x[], int size)
{
    int i, j;
    int minIndx;
    for (i = 0; i < size - 1; i++)
    {
        minIndx = i;
        for (j = i + 1; j < size; j++)
        {
            minIndx = x[minIndx] > x[j] ? j : minIndx;
        }
        if (minIndx != i)
        {
            swap(x[i], x[minIndx]);
        }
    }
}

int main()
{
    int x[] = {5, 4, 3, 2, 1};
    selectionSort(x, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}