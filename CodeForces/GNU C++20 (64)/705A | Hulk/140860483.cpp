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
 
    ll n;
    cin >> n;
    if(n==1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout << "I hate ";
            if(i!=n)
            {
                cout << "that ";
            }
            else
            {
                cout << "it";
                break;
            }
        }
        if(i%2==0)
        {
            cout << "I love ";
            if(i!=n)
            {
                cout << "that ";
            }
            else
            {
                cout << "it";
                break;
            }
        }
    }
 
}