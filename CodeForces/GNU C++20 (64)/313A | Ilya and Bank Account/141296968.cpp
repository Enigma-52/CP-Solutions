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
 
    ll n;
    cin >> n;
    if(n>0)
    {
        cout << n;
        return 0;
    }
    // cout << n/10;
    if(n<0)
    {
        if(abs(n%10)<abs((n/10)%10))
        {
            cout << ((n/100)*10) + (n%10);
            return 0;
        }
        cout << n/10;
 
    }
 
}