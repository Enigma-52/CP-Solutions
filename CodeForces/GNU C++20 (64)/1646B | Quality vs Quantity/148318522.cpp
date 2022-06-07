#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
// Google
// ll t;
// cin >> t;  
//  for(int i=1;i<=t;i++)
//  {
//     cout << "Case #" << i << ": " ;
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
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outputter.txt","w",stdout);
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
            ll sum=0;
            for(ll i=0;i<n;i++)
            {
                cin >> a[i];
                sum=sum+a[i];
            }
            ll prefixSum[n];
            sort(a,a+n);
            ll l=0;
            ll r=n-1;
            ll sred=0,sblue=0;
            ll f=0;
            while(l<r)
            {
                sred+=a[r];
                sblue+=a[l];
                if(sred>sblue+a[l+1] ) f=1;
                l++;
                r--;
            }
            if(f==1) cout << "YES" << endl;
            else cout << "NO" << endl;
 
    }
}
        
       
        