#include <iostream>
#include <math.h>

using namespace std;

// Given a route containing 4 directions (E,W,N,S),
// find the shortest path to reach destination.

// "WNEENESENNN"

int shortestPath(const string s)
{
    //Base Case.
    if (s.length() == 0)
    {
        return 0;
    }
    int x = 0;
    int y = 0;

    // Finding the destination.
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W')
        {
            x--;
        }
        else if (s[i] == 'E')
        {
            x++;
        }
        else if (s[i] == 'N')
        {
            y++;
        }
        else if (s[i] == 'S')
        {
            y--;
        }
    }

    // Calculating the shortest path.
    return sqrt((x*x + y*y));
}

int main()
{
    string x = "WNEENESENNN";
    cout << shortestPath(x);
    return 0;
}