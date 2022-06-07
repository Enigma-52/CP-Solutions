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
        ll a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << 0 << endl;
            continue;
        }
        ll m=abs(a-b)/10;
        if(abs(a-b)%10==0)
        {
            cout << m << endl;
        }
        else
        {
            cout << m+1 << endl;
        }
 
 
    }
}