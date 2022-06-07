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
 
   ll n;
   cin >> n;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
        cin >> a[i];
   }
   sort(a,a+n);
   for(ll i=0;i<n;i++)
   {
    cout << a[i] << " " ;
   }
}