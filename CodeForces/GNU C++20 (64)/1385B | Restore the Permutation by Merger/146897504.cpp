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
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin >> a[i];
        }
        std::vector<int> v;
        for(int i=0;i<2*n;i++)
        {
            if(find(v.begin(), v.end(),a[i])==v.end())
            {
                v.pb(a[i]);
            }
        }
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
 
    }  
}