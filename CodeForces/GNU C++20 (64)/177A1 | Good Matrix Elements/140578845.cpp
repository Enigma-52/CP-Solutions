#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
       s=s+a[i][n-1-i];
       s=s+a[i][i];
    }
    for(int i=0;i<n;i++)
    {
       if(i==((n-1)/2))
       {
            for(int j=0;j<n;j++)
            {
                s=s+a[i][j];
            }
       }
    }
    for(int j=0;j<n;j++)
    {
       if(j==((n-1)/2))
       {
            for(int i=0;i<n;i++)
            {
                s=s+a[i][j];
            }
       }
    }
    s=s-a[(n-1)/2][(n-1)/2]*3;
    cout << s;
}
     
    
 