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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        cout << abs(a[0]-a[n-1]) << endl;
 
    }
}
 
 
 