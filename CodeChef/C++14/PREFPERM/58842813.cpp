#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
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
 
     
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<k;i++)
        {
            cin >> a[i];
        }
        int cnt=0;
        std::vector<int> v;
        for(int i=0;i<k;i++)
        {
            if(i==0)
            {
                cnt=a[i];
                for(int j=a[i];j>=1;j--)
                {
                    v.pb(j);
                }
            }
            else
            {
                for(int j=a[i];j>cnt;j--)
                {
                    v.pb(j);
                }
                cnt=a[i];
            }
        }
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
