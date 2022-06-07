#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll c1=0,c2=0;
        if(s.length()==1)
        {
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0') c1++;
            if(s[i]=='1') c2++;
        }
        if(c1<c2)
        {
            cout << c1 << endl;
            continue;
        }
        if(c2<c1) 
            {
                cout << c2 << endl;
                continue;
            }
        if(c1==c2 && s.length()>2)
        {
            cout << c2-1 << endl;
        }
        else cout << 0 << endl;
    }
}
 