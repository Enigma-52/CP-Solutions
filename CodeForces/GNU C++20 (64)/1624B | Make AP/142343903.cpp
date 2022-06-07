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
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
 
       
        if (2 * b - a > 0 && (2 * b - a) % c == 0) {
        std::cout << "YES\n";
    } else if (2 * b - c > 0 && (2 * b - c) % a == 0) {
        std::cout << "YES\n";
    } else if ((a + c) % (2 * b) == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
 
    }
}
 
 
 