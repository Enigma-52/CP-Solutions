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
 
    ll n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]='#';
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]='.';
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        a[i][m-1]='#';
        i=i+3;
    }
    for(int i=3;i<n;i++)
    {
        a[i][0]='#';
        i=i+3;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
 
 
 
        
 
 
 
 
    
 
}