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
 
   
        ll n,m,a,b;
        cin >> n >> m >> a >> b;
        if((m*a)<=b)
        {
            cout << n*a ;
            return 0;
        }
        else
        {
            cout << ((n/m)*b) + min(b,(n%m)*a);
        }
 
 
 
    
    
}