#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    int n=s.length();
    int h=n;
    int c=0;
    for(int i=0;i<n;i++)
    {   
        if(s[i]==t[h-1]) c++;
        h--;
    }
    if(c==n) cout << "YES" ;
    else cout << "NO" ;
}