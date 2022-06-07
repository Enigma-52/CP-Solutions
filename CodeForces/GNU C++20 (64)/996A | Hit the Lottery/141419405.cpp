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
     ll cnt=0;
     if(n>=100)
     {
        cnt=cnt+floor(n/100);
        n=n-(floor(n/100)*100);
     }
     if(n>=20)
     {
        cnt=cnt+floor(n/20);
        n=n-(floor(n/20)*20);
     }
     if(n>=10)
     {
        cnt=cnt+floor(n/10);
        n=n-(floor(n/10)*10);
     }
     if(n>=5)
     {
        cnt=cnt+floor(n/5);
        n=n-(floor(n/5)*5);
     }
     if(n>=1)
     {
        cnt=cnt+floor(n/1);
        n=n-(floor(n/1)*1);
     }
     cout << cnt;
 
}
 