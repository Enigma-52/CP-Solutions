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
       string s=to_string(n);
       n=s.length();
       if(s[0]!='9')
       {
            int k=s[0]-48;
            if(k>=5)
            {
                cout << 9-k;
            }
            else cout << k;
       }
       else cout << s[0];
       for(int i=1;i<n;i++)
       {
         int h=s[i]-48;
         if(h>=5)
            {
                cout << 9-h;
            }
            else cout << h;
       }
 
 
 
 
    
 
}