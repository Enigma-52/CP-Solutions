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
    
    int t;
    cin >> t;
    while (t--) 
    {
        ll a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << 0 << endl;
            continue;
        }
        if(a>b)
        {
            if(abs(a-b)%2!=0) cout << 2 << endl;
            else  cout << 1 << endl;
            continue;
        }
        if(a<b)
        {
            if(abs(a-b)%2!=0) cout << 1 << endl;
            else  cout << 2 << endl;
            continue;
        }
 
 
    }
}