#include <bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string word)
{
    bool ans;
    for (int i = 1; i < word.length(); i++)
    {
        if (word[0] >= 'A' && word[0] <= 'Z')
        {
            if (word[1] >= 'A' && word[1] <= 'Z')
            {
                if (word[i] >= 'A' && word[i] <= 'Z')
                {
                    ans = true;
                }
                else
                {
                    return false;
                }
            }
           else if (word[1] >= 'a' && word[1] <= 'z')
            {
                if (word[i] >= 'a' && word[i] <= 'z')
                {
                    ans = true;
                }
                else
                {
                    return false;
                }
            }
        }
       
        else if (word[0] >= 'a' && word[0] <= 'z')
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                ans = true;
            }
            else
            {
                return false;
            }
        }
    }

    return ans;
}

int main()
{
    cout<<detectCapitalUse("Usa");
}