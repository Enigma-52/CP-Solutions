#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outputter.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        set<ll> s;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s.emplace(a[i]);
        }
        ll cnt=s.size();
        for(ll i=0;i<n;i++)
        {
            cout << max(i+1,cnt) << " ";
        }
        cout << endl;
 
 
 
 
    }
}