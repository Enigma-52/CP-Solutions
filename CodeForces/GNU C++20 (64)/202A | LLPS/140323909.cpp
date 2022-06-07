#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s;
    cin >> s;
    int n=s.length();
    sort(s.begin(),s.end());
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=s[i-1])
        {
            cout << s[i];
            break;
        }
        cout << s[i];
    }
 
     
}