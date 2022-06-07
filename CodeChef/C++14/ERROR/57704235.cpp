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

 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n=s.length();
        ll f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && i+2<n)
            {
                f=1;
                break;
            }
            if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1' && i+2<n)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }

        


 
 
    
 
}