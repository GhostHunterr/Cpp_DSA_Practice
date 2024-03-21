#include <iostream>

using namespace std;

void minAndMax(int arr[], int N)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Min is: " << min << endl;
    cout << "Max is: " << max << endl;
}

int main()
{
    int arr[] = {2,5,1,8,9,4,7,10};
    minAndMax(arr, 8);
    
    return 0;}