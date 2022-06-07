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
 
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ss="";
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') c1++;
        if(s[i]=='1') c2++;
    }
    cout << abs(c1-c2);
    
 
 
}
 