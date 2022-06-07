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
        ll a[n];
        ll max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(i!=n-1 && a[i]>max)
            {
                max=a[i];
            }
        }
        if(!is_sorted(a,a+n))
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
 
 
    }
 
}