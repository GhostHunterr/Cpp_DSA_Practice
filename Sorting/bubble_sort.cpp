#include <iostream>

using namespace std;

void bubbleSort(int x[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (x[j + 1] < x[j])
            {
                swap(x[j + 1], x[j]);
            }
        }
    }
}

int main()
{
    int x[] = {5, 4, 3, 2, 1};
    bubbleSort(x, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}