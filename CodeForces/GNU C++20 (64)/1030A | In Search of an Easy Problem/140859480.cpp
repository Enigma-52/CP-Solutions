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
    ll a[n];
    int z=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            cout << "HARD" ;
            z=1;
            break;
            
        }
    }
    if(z==0)
    {
        cout << "EASY";
    } 
 
}