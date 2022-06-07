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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cnt++;
        }
    }
    if(cnt>0) cout << "YES";
    else cout << "NO";
 
 
}
 
 
 
 
 
 
 
 
 
        