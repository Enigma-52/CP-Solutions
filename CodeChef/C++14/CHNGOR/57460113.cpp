#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
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
        ll sum=0;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum=sum|a[i];
        }
        cout << sum << endl;

    }
}