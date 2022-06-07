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
 
     ll sum=0;
    int t;
    cin >> t;
    while(t--)
    {
    
        string s;
        cin >> s;
        if(s[0]=='T') sum+=4;
        if(s[0]=='C') sum+=6;
        if(s[0]=='O') sum+=8;
        if(s[0]=='D') sum+=12;
        if(s[0]=='I') sum+=20;
    }
    cout << sum << endl;
}
 