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
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l=0;
        int r=n-1;
        int f=0;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                f=1;
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        if(k==0)
        {
            cout << 1 << endl;
           continue;
        }
        if(f==1)
        {
            cout << 2 << endl;
        }
        else cout << 1 << endl;
    }
 
 
 
}