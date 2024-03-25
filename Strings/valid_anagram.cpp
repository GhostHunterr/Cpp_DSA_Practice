#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t)
{

    //Checking if the length is equal.
    if(s.length() != t.length())
    {
        return false;
    }

    //Sort the string.
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    //Check if string are same.
    for(int i = 0; i< s.length(); i++)
    {
        if(s[i] != t[i])
        {
            return false;
        }
    }

    return true;


}   

int main()
{
    return 0;
}
