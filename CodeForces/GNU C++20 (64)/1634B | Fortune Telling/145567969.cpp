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
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x,y;
        cin >> n >> x >> y;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum=sum+a[i];
        }
        if((sum+x+y)%2==0)
        {
            cout << "Alice" << endl;
        }
        else cout << "Bob" << endl;
 
        
 
 
 
    }
 
 
 
}