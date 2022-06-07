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
        ll a,b,c;
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a)
        {
            cout << "YES" << endl;
            continue;
        }
        if(a==b)
        {
            if(c%2==0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        if(a==c)
        {
            if(b%2==0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        if(c==b)
        {
            if(a%2==0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
 
        
    }    
}