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
    char a[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(ll i=1;i<n-1;i++)
    {
        for(ll j=1;j<n-1;j++)
        {
            if(a[i][j]=='.')
            {
                if(a[i+1][j]=='.' && a[i][j+1]=='.' && a[i-1][j]=='.' && a[i][j-1]=='.')
                {
                    a[i][j]='#';
                    a[i+1][j]='#';
                    a[i][j+1]='#';
                    a[i-1][j]='#';
                    a[i][j-1]='#';
                }
            }
        }
    }
     ll f=0;
     for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[i][j]=='.')
            {
                f=1;
                break;
            }
        }
        if(f==1) break;
    }
    if(f==1) cout << "NO" ;
    else cout << "YES";
    
 
 
 
}
       
        
      