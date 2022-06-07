#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
 
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
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        double a=cbrt(x);
        ll cnt=0;
        ll f=0;
        for(ll i=1;i<a;i++)
        {
            double bb=x-(i*i*i);
            if(floor(cbrt(x-(i*i*i)))==ceil(cbrt(x-(i*i*i))))
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout <<"YES" << endl;
        }
        else cout << "NO" << endl;
 
 
        
    }
    
 
 
 
 
 
}