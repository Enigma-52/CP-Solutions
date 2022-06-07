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
        ll n;
        cin >> n;
        ll s[n];
        ll a=0,b=0,c=0;
        for(ll i=0;i<n;i++)
        {
            cin >> s[i];
            if(s[i]%3==0) a++;
            if(s[i]%3==1) b++;
            if(s[i]%3==2) c++;
        }
        int mini=min(b,c);
        // debug(b);
        // debug(c);
        b=b-mini;
        c=c-mini;
        // debug(b);
        // debug(c);
        if(b==0)
        {
            a=a+(c/3);
        }
        else a=a+(b/3);
        cout << a+mini << endl;
    }
 
 
 
    
 
 
 
    
}