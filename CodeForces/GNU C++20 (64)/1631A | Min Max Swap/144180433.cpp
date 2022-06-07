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
        ll b[n];
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
       
        for(int i=0;i<n;i++)
        { 
            if(a[i]<b[i])
            {
                int temp=b[i];
                b[i]=a[i];
                a[i]=temp;
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        cout << a[n-1]*b[n-1] << endl;
       
 
 
    }
 
}
 