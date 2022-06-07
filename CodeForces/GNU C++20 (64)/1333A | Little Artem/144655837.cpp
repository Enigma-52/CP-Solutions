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
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;    
        cout << "W";
        for(int i=0;i<m-1;i++)
        {
            cout << "B";
        }
        cout << endl;
        n--;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << "B";
            }
            cout << endl;
        }
    }
}
 