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
        ll n,a,b,c;
        cin >> n >> a >> b >> c;
        int mini=min(a,b);
        b=b-mini;
        int mini2=mini+min(b,c);
        if(mini2>=n){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }

}

