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
 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
    if(n>=1 && n<=50)
    {
        cout << 100;
        return 0;
    }
    if(n>=51 && n<=100)
    {
        cout << 50;
        return 0;
    }
    cout << 0;

}