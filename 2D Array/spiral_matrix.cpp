#include <iostream>

using namespace std;

void spiralMatrix(int **arr, int x, int y)
{
    int startRow = 0;
    int endRow = x - 1;
    int startCol = 0;
    int endCol = y - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // Top
        for (int i = startCol; i <= endCol; i++)
        {
            cout << arr[startRow][i] << ' ';
        }

        // Right
        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << arr[i][endCol] << ' ';
        }

        // Bottom
        for (int i = endCol - 1; i >= startCol; i--)
        {
            cout << arr[endRow][i] << ' ';
        }

        // Left
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            cout << arr[i][startCol] << ' ';
        }

        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int rows = 4; // Or any other value
    int cols = 4; // Or any other value
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    int count = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = count++;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;
    
    spiralMatrix(arr, rows, cols);

    return 0;
}