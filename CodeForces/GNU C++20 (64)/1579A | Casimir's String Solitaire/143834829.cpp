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
       string s;
       cin >> s;
       int n=s.length();
       int c1=0,c2=0,c3=0;
       for(int i=0;i<n;i++)
        {
            if(s[i]=='A') c1++;
            if(s[i]=='B') c2++;
            if(s[i]=='C') c3++;
        }
            int mini=min(c1,c2);
            int mini2=min((c2-mini),c3);
            int k=(mini*2)+(mini2*2); 
       if(k==n) cout << "YES" << endl;
       else cout << "NO" << endl;
 
 
 
       
 
 
    }
 
 
 
    
}
 
 
 
 
 