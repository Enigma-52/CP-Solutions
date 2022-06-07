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
 
    ll n,x;
    cin >> n >> x;
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
        if(x%i==0 && (x/i)<=n)
        {
            cnt++;
        }
    }
    cout << cnt ;  
}
 
 
 
 
 