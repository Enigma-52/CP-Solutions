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
       string s;
       cin >> s;
       char c;
       cin >> c;
       ll n=s.length();
       if(s[0]==c)
       {
        cout << "YES" << endl;
        continue;
       }
       if(s[0]!=c && s.length()==1)
       {
        cout << "NO" << endl;
        continue;
       }
       int cnt=0;
       int f=0;
       for(int i=0;i<n;i++)
       {
            if(s[i]!=c) continue;
            if(s[i]==c)
            {
                if((i%2==0) &&(n-1-i)%2==0) f=1;
            }
       }
       if(f==1) cout << "YES" << endl;
       else cout << "NO" << endl;
 
 
    
 
 
        
 
    }
 
}
        
       