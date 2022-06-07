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
 
 
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];   
    }
    sort(a,a+n);
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i+2]+k<=5 && i+2<n)
        {
            cnt++;
            i++;
            i++;
        }
    }
    cout << cnt ;
 
 
}
 