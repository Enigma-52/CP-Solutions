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
        ll l,r;
        cin >> l >> r;
        if(l%3==0)
        {
            cout << (r/3) - (l/3) +1 << endl;
        }
        else  cout << (r/3) - (l/3)  << endl;
    }

}

