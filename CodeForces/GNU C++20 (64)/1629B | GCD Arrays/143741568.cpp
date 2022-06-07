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
 
ll countOdd(ll L, ll R){
 
    ll N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
 
 
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
        ll l,r,k;
        cin >> l >> r >> k;
        if(l==r)
        {
            if(l!=1) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        ll cnt=countOdd(l,r);
        if(cnt<=k) cout << "YES" << endl;
        else cout << "NO" << endl;
 
 
        
    }
 
}
 
 
 
 
 
 
 
        
      