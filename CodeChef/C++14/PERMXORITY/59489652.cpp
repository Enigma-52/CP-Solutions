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

void rvereseArray(ll arr[], ll start, ll end)
{
    while (start < end)
    {
        ll temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
        ll n;
        cin >> n;
        ll a[n];
        
        for(int i=0;i<n;i++)   
        {
            a[i]=i+1;
        }
        if(n==2)
        {
            cout << -1 << endl;
            continue;
        }
        if(n%2!=0)
        {
            for(auto x:a)
            {
                cout << x << " ";
            }
            cout << endl;
            continue;

        }
        a[0]=2;
        a[1]=3;
        a[2]=1;
        
        
        for(auto x:a)
        {
            cout << x << " ";
        }
        cout << endl;
        continue;
        std::vector<ll> v;
        for(int i=0;i<n-1;i++)   
        {
            v.pb(abs(a[i]-a[i+1]));
        }


        ll x=v[0];
        for(int i=1;i<v.size();i++)   
        {
            x=x^v[i];
            cout << x << endl;
            
        }
        

    }
}


    
    
        


    
