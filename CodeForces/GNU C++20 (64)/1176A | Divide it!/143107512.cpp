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
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int cnt=0;
        ll a=0,b=0,c=0;
        while(n!=1)
        {
            if(n%2==0)a=n/2;
            else a=n;
            if(n%3==0) b=(2*n)/3;
            else b=n;
            if(n%5==0) c=(4*n)/5;
            else c=n;
            if(a==b && b==c && c==n)
            {
                cnt=-1;
                break;
            }
            n=min(a,min(b,c));
            cnt++;
            
            
        }   
        cout << cnt << endl;
    }
 
 
 
    
 
 
 
    
}