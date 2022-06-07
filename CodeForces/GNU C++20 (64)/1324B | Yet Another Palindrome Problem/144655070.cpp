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
        ll a[n];
        std::vector<pair<int,int>> v;
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll f=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j] && abs(j-i)>=2)
                {
                    f=1;
                }
            }
        }
        if (f==1) cout <<"YES" << endl;
        else cout << "NO" << endl;
        
 
    }
}
 