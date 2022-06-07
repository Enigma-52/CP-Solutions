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
    
    int t;
    cin >> t;
    while (t--) 
    {
        ll l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << r1 << " ";
        if(r2!=r1) cout << r2 <<endl;
        else cout << r2-1 << endl;
 
    }
}