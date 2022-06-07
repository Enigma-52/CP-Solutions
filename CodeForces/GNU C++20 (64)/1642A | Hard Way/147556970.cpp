#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("outputter.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(y1==y2 && y3<y1)
        {
            cout << fixed << setprecision(10)<<  double(abs(x1-x2)) << endl;
            continue;
        }
        if(y3==y2 && y1<y2)
        {
            cout << fixed << setprecision(10)<<  double(abs(x3-x2)) << endl;
            continue;
        }
        if(y3==y1 && y2<y1)
        {
            cout << fixed << setprecision(10)<<  double(abs(x1-x3)) << endl;
            continue;
        }
        cout << fixed << setprecision(10) << double(0) << endl;
    }
}