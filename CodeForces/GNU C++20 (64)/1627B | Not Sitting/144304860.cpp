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
        ll n,m;
        cin >> n >> m;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll d1=i+j;
                ll d2=i+(m-j-1);
                ll d3=(n-i-1)+j;
                ll d4=(n-i-1)+(m-j-1);
                v.push_back(max(d1,max(d2,max(d3,d4))));
            }
        }
        sort(v.begin(), v.end());
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
 
 
 
        
 
 
 
    }
 
}
 