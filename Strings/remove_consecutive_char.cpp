#include <iostream>

using namespace std;

string removeConsecutiveCharacter(string S)
{
    string modified = "";
    int i;
    modified.push_back(S[0]);
    for (i = 1; i < S.length(); i++)
    {
        if (S[i - 1] == S[i])
        {
            continue;
        }
        else
        {
            modified.push_back(S[i]);
        }
    }
    if (i < S.length())
    {
        modified.push_back(S[i]);
    }
    return modified;
}

int main()
{
    string x = "aaabb";
    cout << removeConsecutiveCharacter(x);

    return 0;
}