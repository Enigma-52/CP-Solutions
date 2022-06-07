#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;
    ll k=min(k2,min(k5,k6));
    ll k12=k2-k;
    ll k11=min(k12,k3);
    cout << 256*k + 32*k11;
 
    
}