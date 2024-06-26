#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x)
{
    vector<int> ans;
    for (int i = 0; i < words.size(); i++)
    {
        if(words[i].find(x) != -1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    vector<string> words = {"leet", "code"};
    findWordsContaining(words, 'm');

    return 0;
}
