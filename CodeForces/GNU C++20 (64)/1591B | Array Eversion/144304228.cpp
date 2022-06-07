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
        cin >> n ;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll mx=a[n-1];
        ll cnt=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]>mx)
            {
                cnt++;
                mx=a[i];
            }    
        }
        cout << cnt << endl;
 
 
        
 
 
 
    }
 
}
 