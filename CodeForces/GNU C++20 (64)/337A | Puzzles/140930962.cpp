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
 
   ll n,m;
   cin >> n >> m;
   ll a[m];
   for(ll i=0;i<m;i++)
   {
        cin >> a[i];
   }
   sort(a,a+m);
   int max=a[m-1];
   for(int i=0;i<m-(n-1);i++)
   {
 
        if(abs(a[i]-a[i+(n-1)])<max)
        {
            max=abs(a[i]-a[i+(n-1)]);
        }
   }
   cout << max ;
}