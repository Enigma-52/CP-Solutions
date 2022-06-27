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
 
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        if(s[0]==s[n-1])
        {
            cout << s << endl;
            continue;
        }
        else
        {
            s[0]=s[n-1];
            cout << s << endl;
            continue;
        }
 
    }
}