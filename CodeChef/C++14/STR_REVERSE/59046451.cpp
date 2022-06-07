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
 
   
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string k=s;
        reverse(k.begin(), k.end());
        ll cnt=0;
        ll n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==k[cnt]) cnt++;
        }
        cout << n-cnt << endl;
    }
}
