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
 
    ll n,m;
    cin >> n >> m;
    int z1=0,z2=0;
    while(1)
    {
        n--;
        m--;
        if(n==0 || m==0)
        {
            cout << "Akshat";
            break;
        }
        n--;
        m--;
        if(n==0 || m==0)
        {
            cout << "Malvika";
            break;
        }
    }
 
}