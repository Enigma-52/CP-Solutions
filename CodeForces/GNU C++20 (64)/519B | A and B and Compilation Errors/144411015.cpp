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
    ll a[n],b[n-1],c[n-2];
    ll s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s1=s1+a[i];
    }    
    for(int i=0;i<n-1;i++)
    {
        cin >> b[i];
        s2=s2+b[i];
    } 
    for(int i=0;i<n-2;i++)
    {
        cin >> c[i];
        s3=s3+c[i];
    }
    cout << s1-s2 << endl;
    cout << s2-s3 << endl;
 
 
 
}
    
 
 
 