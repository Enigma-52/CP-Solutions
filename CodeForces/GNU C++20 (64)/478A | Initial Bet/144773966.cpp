#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // ll t;
    // cin >> t;
    // while(t--)
    // {
        ll a[5];
        ll sum=0;
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum==0)
        {
            cout << -1 << endl;
            return 0;
        }
        if(sum%5==0) cout << sum/5;
        else cout << -1;
    // }
}