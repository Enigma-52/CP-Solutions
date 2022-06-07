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

    int t;
    cin >> t;
    while(t--)
    {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a<b)
    {
        a=a+c;
    }
    else b=b+c;
    if(a<b)
    {
        a=a+d;
    }
    else b=b+d;
    if(a>=b)
    {
        cout << "N" << endl;
    }
    else cout << "S" << endl;
}


}