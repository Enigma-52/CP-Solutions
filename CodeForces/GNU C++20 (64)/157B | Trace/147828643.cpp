#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
int odd(int n)
{
    if(n%2!=0) return 1;
    else return 0;
}
int even(int n)
{
    if(n%2==0) return 1;
    else return 0;
}
 
long long gcd(long long  a, long long  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
 
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outputter.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
    ll r[n];
    for(ll i=0;i<n;i++)
    {
        cin >> r[i];
    }
     sort(r,r+n);
     double k=0.0;
     double pi=3.1415926536;
     double sum=0.0;
     ll s=0;
     for(int i=n-1;i>=0;i--)
     {
        s=s+(r[i]*r[i]);
        if((i-1)>=0) 
            {
                s=s-(r[i-1]*r[i-1]);
                i--;
            }
     }
     cout << fixed << setprecision(10) << s*pi << endl;
 
}