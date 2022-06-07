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
        ll n,m,r,c;
        cin >> n >> m >> r >> c;
        char a[n][m];
        int b=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin >> a[i][j];
                if(a[i][j]=='B') b++;
            }
        }
        if(a[r-1][c-1]=='B')
        {
            cout << 0 << endl;
            continue;
        }
        if(b==0)
        {
            cout << -1 << endl;
            continue;
        }
int f=0;
        for(int j=0;j<m;j++)
        {
            if(a[r-1][j]=='B') f=1;
        }
        for(int j=0;j<n;j++)
        {
            if(a[j][c-1]=='B') f=1;
        }
        if(f==1)
        {
            cout << 1 << endl;
            continue;
        }
        else cout << 2 << endl;
 
 
 
 
    }
 
 
 
    
}