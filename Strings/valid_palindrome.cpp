#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    string strStripped = "";
    // Removing special character and spaces.
    for (char c : s)
    {
        if(isalnum(c))
        {
            strStripped.push_back(c);
        }
    }

    if(strStripped.length()<2)
    {
        return true;
    }
   
    // Checking if palindrome.
    for(int i = 0; i<=strStripped.length()/2; i++)
    {
        if(toupper(strStripped[i]) != toupper(strStripped[strStripped.length() - i - 1]))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string x = "A man, a plan, a canal: Panama";
    cout << isPalindrome(x);

    return 0;
}