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
 
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll cnt=0;
    ll c=0;
    for(int i=0;i<n;i++)
    {
        ll r=a[i];
        while(r>0)
        {
            int d=r%10;
            if(d==7 || d==4) cnt++;
            r=r/10;
        }
        if(cnt<=k) c++;
        cnt=0;
    }
    cout << c << endl;
 
   
 
 
   
}