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
 
    ll x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    ll a[3]={x1,x2,x3};
    int n=3;
    sort(a,a+n);
    cout << abs(a[2]-a[1])+abs(a[1]-a[0]);
 
 
        
 
 
 
 
    
 
}