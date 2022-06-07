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
 
 
    ll t;
 
    cin >> t;
    ll a[t]={0};
    ll b[t]={0};
    for(ll i=0;i<t;i++)
    {
        cin >> a[i] >> b[i];
    }
    ll cnt=0;
    // debug(a[1]);
    // debug(b[1]);
    for(ll i=0;i<t;i++)
    {
        for(ll j=0;j<t;j++)
        {
            if(a[i]==b[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
 
}