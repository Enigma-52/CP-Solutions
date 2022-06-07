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
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
 
        string s;
        cin >> s;
        ll cnt=0;
 
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    
    
 
 
 
        
 
 
 
 
    
 
}