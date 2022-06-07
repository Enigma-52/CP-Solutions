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
        ll a[n];
 
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        reverse(a,a+n);
        int ans=0;
        int val=a[0];
        int i=0;
        while(i<n)
        {
            while(i<n && a[i]==val)
            {
                i++;
            }
            if(i==n)
            {
                break;
            }
            ans++;
            i*=2;
        }
    cout<<ans<< endl;
       
 
 
    }
 
}
 