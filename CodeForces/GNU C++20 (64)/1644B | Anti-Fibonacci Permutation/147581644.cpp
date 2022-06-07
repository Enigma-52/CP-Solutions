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
        for(int i=1;i<=n;i++)
        {
            cout << i << " ";
            for(ll j=n;j>=1;j--)
            {
                if(i!=j) cout << j << " ";
            }
            cout << endl;
        }
 
 
 
 
    }
}