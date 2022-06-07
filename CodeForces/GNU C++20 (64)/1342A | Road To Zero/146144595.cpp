#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
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
        ll x,y;
        cin >> x >> y;
        ll a,b;
        cin >> a >> b;
        ll temp=x;
        x=max(x,y);
        y=min(temp,y);
        if((a+a)<=b)
        {
            cout << (x+y)*a << endl;
            continue;
        }
        else
        {
            cout << (y*b) + (x-y)*a << endl;
            continue;
        }
 
 
 
 
    }
 
}