#include <iostream>
#include <string>

using namespace std;

string capitalize(string s)
{
    s[0] = toupper(s[0]);
    for(int i = 1; i<s.length(); i++)
    {
        if(s[i-1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

int main()
{
    string s = "hi, i am farhan";
    cout << capitalize(s);

    return 0;
}