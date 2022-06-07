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
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        int mn=v[0];
        for(int i=1,k=0;k<n/2;i++)
        {
            cout << v[i] << " " << mn << endl;
            k++;
        }
 
 
 
    }
 
}
 