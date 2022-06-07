#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // ll t;
    // cin >> t;
    // while(t--)
    // {
        
    string s;
    cin >> s;
    int n=s.length();
    ll cnt=0;
    ll max=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        if(s[i]!=s[i+1] || i+1==n)
        {
            if(cnt>max)
            {
                max=cnt;
            }
            cnt=0;
        }
 
    }
    if(max>=6) cout << "YES" << endl;
        else  cout << "NO" << endl;
 
    // }
}