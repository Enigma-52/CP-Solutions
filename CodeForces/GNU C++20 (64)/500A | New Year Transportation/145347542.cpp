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
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,t;
    cin >> n >> t;
    ll a[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    a[n]=1;
    for(int i=0;i<=n;i+=a[i])
    {
        if(i+1==t)
        {
            cout << "YES" << endl;
            return 0;
        }
 
    }
    cout << "NO" << endl;
}
 
        