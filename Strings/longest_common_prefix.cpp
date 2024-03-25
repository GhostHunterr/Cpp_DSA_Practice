#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    // Base Case.
    if (strs[0] == "" || strs.empty())
    {
        return "";
    }
    else if (strs.size() == 1)
    {
        return strs[0];
    }

    string common = "";
    for (int i = 0; i < strs[0].length(); i++)
    {
        char curr = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (curr != strs[j][i])
            {
                return common;
            }
                       
        }
        common.push_back(curr);
    }
    
    return common;
}

int main()
{
    vector<string> x = {"flower","flow","flight"};
    cout << longestCommonPrefix(x);
    return 0;
}