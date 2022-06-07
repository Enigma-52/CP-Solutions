#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     const int N = 1e+5;
    bool used[N];
    long long int n , a, b, m, l;
    cin >> n;
    cin >> a;
    for ( int i = 1; i <= a; i ++ )
    {
        cin >> m;
        used[m] = true;
    }
    cin >> b;
    for ( int i = 1; i <= b; i ++ )
    {
        cin >> l;
        used[l] = true;
    }
    for ( int i = 1; i <= n; i ++ )
    {
        if( used[i] == false )
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
 
 
 
 