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

    ll t;
    cin >> t;
    while(t--)
    {
        ll z,y,a,b,c;
        cin >> z>> y >> a >> b >>c;
        z=z-y;
        if(a+b+c<=z) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    
}