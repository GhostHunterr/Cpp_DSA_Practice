#include <iostream>

using namespace std;

void reverseArr(int x[], int N)
{
    for(int i = 0; i<N/2; i++)
    {
        swap(x[i], x[N- i-1]);
    }
}

int main()
{
    int original_array[] = {1, 2, 3};
    reverseArr(original_array, 3);
    for(int i = 0; i<3; i++)
    {
        cout << original_array[i] << " " ;
    }

    return 0;
}