#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007


int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--)
    {
        ll n;
        cin >> n;
        ll a[n]={0};
        string s="";
        if(n<=2)
        {
            cout << 0 << endl;
            continue;
        }
        if(n==3)
        {
            cout << 10 << endl;
            continue;
        }
        ll resu=pow(3,(n-3));
        resu=resu*8*(n-2);
        ll p=resu + resu/4;
        ll kj=p;
        cout << kj<< endl;
    }


}