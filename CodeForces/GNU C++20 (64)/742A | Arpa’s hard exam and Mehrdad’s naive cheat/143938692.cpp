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
    if(n==0)
    {
     cout << 1;
     return 0;
    }
    if(n%4==0) cout << 6;
    if(n%4==1) cout << 8;
    if(n%4==2) cout << 4;
    if(n%4==3) cout << 2;
}
 
 
 
 
 
 