#include <iostream>
#include <string>

using namespace std;

string stringCompression(string s)
{
    string compressed = "";
    int i;

    for (i = 0; i < s.length(); i++)
    {
        compressed.push_back(s[i]);
        int count = 1;
        for (int j = i + 1; j < s.length() && s[i] == s[j]; j++)
        {
            count++;
        }

        if (count == 1)
        {
            continue;
        }
        else
        {
            compressed += to_string(count);
            i += count - 1;
        }
    }
    return compressed;
}

int main()
{
    string x = "aaabbbcccdddd";
    cout << stringCompression(x);
    return 0;
}