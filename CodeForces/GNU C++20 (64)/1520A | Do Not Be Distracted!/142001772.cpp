#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // debug(s);
        ll z=0;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]) continue;
            for(int j=i+1;j<n;j++)
            {
                // debug(s[j]);
                // debug(z);
                // cout << endl;
                if(s[j]==s[i]) z=1;
            }
            if(z==1) break;
        }
        if(z==1) cout <<"NO" << endl;
        else cout << "YES" << endl;
    }
}
 
 
 