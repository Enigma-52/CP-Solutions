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
        
    ll n,a,b,c,d;
    cin >> n>> a >> b >> c >> d;
    int l=n*(a-b);
    int r=n*(a+b);
    if(r<(c-d) || l>(c+d))
    {
        cout << "No" << endl;
    }
    else cout << "Yes" << endl;
   }
 
    
 
 
 
}
 
 