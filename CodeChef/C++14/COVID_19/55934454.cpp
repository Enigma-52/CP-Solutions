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
        ll cnt=0;
       ll n,m;
       cin >> n >> m;
       for(ll i=0;i<n;i++)
       {
         for(ll j=0;j<m;j++)
         {
            if(j==0 || j%2==0) cnt++;
         }
         i++;
       }  
       cout << cnt << endl;
    }
}