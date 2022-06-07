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
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        int cnt=0;
        for(int j=0;j<m;j++)
        {
             if(a[n-1][j]=='D') cnt++;
        }
        for(int i=0;i<n;i++)
        {
             if(a[i][m-1]=='R') cnt++;
        }
        cout << cnt  << endl;
        
 
    }
 
}