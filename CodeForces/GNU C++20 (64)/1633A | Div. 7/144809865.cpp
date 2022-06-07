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
        ll n;
        cin >> n;
        if(n%7==0)
        {
            cout << n << endl;
            continue;
        }
        ll k=ceil(n/7);
        ll i=floor(n/7);
        ll h=(k+1)*7;
        if((h/10)==(n/10))
        {
            cout << h << endl;
            continue;
        }
        else cout << i*7  << endl;
 
    }
}