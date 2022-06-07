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
 
    ll n,d;
    cin >> n >> d;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll time=0;
    ll f=0;
    ll cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        time=time+a[i];
        if(time>d)
        {
            f=1;
            break;
        }
 
        if(i==0) break;
        time=time+10;
        cnt+=2;
    }
    if(f==1)
    {
        cout << -1 << endl;
        return 0;
    }
    cnt=cnt+(d-time)/5;
    cout << cnt << endl;
 
   
}