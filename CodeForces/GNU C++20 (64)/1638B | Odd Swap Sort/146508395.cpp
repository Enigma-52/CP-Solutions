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
        std::vector<int> v1;
        std::vector<int> v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a%2!=0) v1.pb(a);
            else v2.pb(a);
        }
        if(is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end()))
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
       
   }
 
 
   
}