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
 
    ll n,m;
    cin >> n >> m;
    ll low=(n+1)/2;
    ll max=n;
    ll f=0;
    for(int i=low;i<=max;i++)
    {
        ll r=i/m;
        if(r*m==i)
        {
            f=i;
            break;
        }
    }
    if(f!=0)
    {
        cout << f << endl;
    }
    else cout << -1 << endl;
 
   
}