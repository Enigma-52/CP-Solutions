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
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        vector<pair<int,int>> v;
        ll min=INT_MAX;
        ll ind1=0,ind2=0;
        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-a[i+1])<min)
            {
                ind1=i;
                ind2=i+1;
                min=abs(a[i]-a[i+1]);
            }
        }
        if(abs(a[0]-a[n-1])<min)
        {
            ind1=0;
            ind2=n-1;
 
        }
        cout << ind1+1 << " "<< ind2+1;
        
    // }
}