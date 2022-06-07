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
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s1;
 
        cin >> s1;
                string s2;
        cin >> s2;
        int f=0;
        for (int i = 0; i < s1.length(); i++)
        {
            
            if(s1[i]=='1' && s2[i]=='1')
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
        f=0;
 
    }
 
 
 
    
}