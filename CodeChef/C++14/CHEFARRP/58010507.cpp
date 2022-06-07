#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
 
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
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll add=0;
        ll sum=1;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            

            for(int j=i;j<n;j++)
            {
                add=add+a[j];
                sum=sum*a[j];
                if(add==sum) cnt++;
            }
            add=0;
            sum=1;
        }
        cout << cnt << endl;
    }





}