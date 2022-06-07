#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
#define all(x) (x).begin(), (x).end()
#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
 
// Google
// ll t;
// cin >> t;  
//  for(int tt=1;tt<=t;tt++)
//  {
//     cout << "Case #" << tt << ": " ;
//  }
 
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
 
ll getSum(ll n)
    {
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
 
void fillPrefixSum(ll arr[], ll n, ll prefixSum[]) 
{ 
    prefixSum[0] = arr[0]; 
 
    // Adding present element 
    // with previous element 
    for (ll i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i-1] + arr[i]; 
} 
 
bool isFactorial(long long int n)
{
  for (long long int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }
 
  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
ll power(ll x, ll y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
 
 bool ispalin(int n)
{  int ans=0;
int temp=n;
    while(n>0)
    {
            int d=n%10;
       ans=ans*10+d;
        n=n/10;
    }
 
    if(ans==temp)
        return true;
    else
        return false;
}
bool isPrime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if(n%i == 0) return false;
    }
    return true;
}
 
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1)%998244353;
}
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
 
int fibo(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1)+fibo(n-2) ;
}
 
ll summ(ll n)
{
    if(n==0)return 0;
    else return(n%10 + summ(n/10));
}
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outtt.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,q;
        cin >> n >> q;
        std::vector<ll> v;
        for(int i=0;i<n;i++)
        {
            ll k;
            cin >> k;
            v.pb(k);
        }
        ll p[n]={0};
        sort(v.rbegin(),v.rend());
        p[0]=v[0];
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+v[i];
        }
        while(q--) {
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(p[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << endl;
 
    }
    
 
}}
 