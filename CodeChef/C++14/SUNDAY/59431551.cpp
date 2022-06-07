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

ll getSum(ll n)
    {
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

void fillPrefixSum(int arr[], int n, int prefixSum[]) 
{ 
    prefixSum[0] = arr[0]; 

    // Adding present element 
    // with previous element 
    for (int i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i-1] + arr[i]; 
} 

int main()
{
 
    
 
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
        ll f=0;
        ll cnt=8;
        ll day[8]={6,7,13,14,20,21,27,28};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(a[i]==day[j]) f=1;
            }
            if(f==1)
            {
                f=0;
                continue;
            }
            cnt++;
            f=0;
        }
        cout << cnt << endl;
    }
}


    
    
        


    
