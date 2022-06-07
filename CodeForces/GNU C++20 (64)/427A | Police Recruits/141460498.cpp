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
 
 
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];   
    }
    int cnt=0,c=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>0) c=c+a[i];
        if(a[i]<0)
        {
            if(c>=abs(a[i])) c=c-abs(a[i]);
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt ;
 
 
}
 