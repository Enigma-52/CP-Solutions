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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,p,q,r;
        cin >> a >> b >> c >> p >> q >> r;
        
         ll n=p+q+r;
         n=n/2;
         ll f=0;
         if(max(a+b+r,max(p+b+c,a+q+c))>n)
         {
            f=1;
         }
         if(f==1)
         {
            cout << "YES" << endl;
         }
         else cout << "NO" << endl;
    }
    
    



        


 
 
    
 
}