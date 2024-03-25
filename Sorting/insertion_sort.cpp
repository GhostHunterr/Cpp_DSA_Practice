#include <iostream>

using namespace std;

void insertionSort(int x[], int size)
{
    int i, j, curr;
    for (i = 1; i < size; i++)
    {
        curr = x[i];
        for (j = i; j > 0 && x[j - 1] > curr; j--)
        {
            x[j] = x[j - 1];
        }
        x[j] = curr;
    }
}

int main()
{
    int x[] = {5, 4, 3, 2, 1};
    insertionSort(x, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}