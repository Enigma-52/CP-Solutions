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
       double sum=0;
       sort(a,a+n);
       for(int i=0;i<n-1;i++)
       {
            sum=sum+a[i];
       }
       double k=(double)sum/(double)(n-1);
       double s=(double)(k+a[n-1]);
       cout << fixed << setprecision(10) << s << endl;
 
       
 
 
    }
 
 
 
    
}
 
 
 
 
 