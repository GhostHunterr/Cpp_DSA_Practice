#include <iostream>

using namespace std;

void mergeSort(int arr[], int size);

void mergeSort(int arr[], int tmp[], int start, int end);

void merge(int arr[], int tmp[], int startA, int startB, int endB);

int main()
{
    int x[] = {5, 4, 3, 2, 1};
    mergeSort(x, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}

void mergeSort(int arr[], int size)
{
    int *tmp = new int[size];
    mergeSort(arr, tmp, 0, size - 1);
    delete[] tmp;
}

void mergeSort(int arr[], int tmp[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, tmp, start, mid);
        mergeSort(arr, tmp, mid + 1, end);
        merge(arr, tmp, start, mid + 1, end);
    }
}

void merge(int arr[], int tmp[], int startA, int startB, int endB)
{
    int aptr = startA;
    int bptr = startB;
    int idx = startA;
    while (aptr < startB && bptr <= endB)
    {
        if (arr[aptr] < arr[bptr])
        {
            tmp[idx++] = arr[aptr++];
        }
        else
        {
            tmp[idx++] = arr[bptr++];
        }
    }

    while (aptr < startB)
    {
        tmp[idx++] = arr[aptr++];
    }

    while (bptr <= endB)
    {
        tmp[idx++] = arr[bptr++];
    }

    for (int i = startA; i <= endB; i++)
    {
        arr[i] = tmp[i];
    }
}