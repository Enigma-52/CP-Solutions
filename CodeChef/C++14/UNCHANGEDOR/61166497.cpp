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
 
int palindrome(string s,int l,int r)
{
    int f=1;
    while(l<r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else {f=0;break;}
    }
    return f;
}

int good(string s)
{
    int c1=0,c2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') c1++;
        else c2++;
    }
    if(c1==c2) return 1;
    else return 0;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outputtt.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll sq=(sqrt(n));//3
        // sq;sq=1<<
        // cout << sq << endl;
        ll copy=1<<sq;//8
        ll c22=n;
        ll cnt=0;
        ll sum=0;
        for(ll i=0;i<sq-1;i++)
        {
            cnt=((cnt*2)+1);
            sum+=cnt;
        }
        cnt=0;
        while(n>=4)
        {
            n=n/2;
            cnt++;
        }
        cout << c22-cnt-2 << endl;


    }





       
            
    



     
    
}