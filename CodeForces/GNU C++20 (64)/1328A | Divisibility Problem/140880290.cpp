#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
 
 
// 3
// 2 828
// 4 392
// 4 903
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        ll sum=a/b;
        if(a%b==0)
        {
            cout << 0 << endl;
            continue;
        }
        ll y=b*(sum+1);
        cout << y-a << endl;
    }
    
 
}