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
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int mx=0;
    ll t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int sum=x+y;
        mx=max(sum,mx);
    }
    cout << mx <<endl;
    
 
 
}