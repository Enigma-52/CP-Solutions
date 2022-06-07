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
int odd(int n)
{
    if(n%2!=0) return 1;
    else return 0;
}
int even(int n)
{
    if(n%2==0) return 1;
    else return 0;
}
 
 
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
        ll n,k1,k2;
        cin >> n >> k1 >> k2;
        ll w,b;
        cin >> w >> b;
        if((2*w)<=(k1+k2) && (2*b)<=((n-k1)+(n-k2)))
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
 
 
    }  
 
    
 
 
   
 
 
   
}