#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int uc=0,lc=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i])) uc++;
        else lc++;
    }
    if(lc>=uc)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout << s;
}