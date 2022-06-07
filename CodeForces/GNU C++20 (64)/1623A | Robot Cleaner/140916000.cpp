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
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   int t;
   cin >> t;
   while(t--)
   {     
        ll n,m,rb,cb,rd,cd;
        cin >> n >> m >> rb>> cb >> rd >> cd;
        if(rb==rd || cb==cd)
        {
            cout << 0 << endl;
            continue;
        }
        ll k=0;
        ll dr=1,dc=1;
        while(1)
        {
            
            if(rb==1)
            {
                dr=1;
            }
            if(cb==1)
            {
                dc=1;
            }
            if(cb==m)
            {
                dc=-1;
            }
            if(rb==n)
            {
                dr=-1;
            }
            
            rb=rb+dr;
            cb=cb+dc;
            k++;
            if(rb==rd || cb==cd)
            {
                break;
            }
        }
        cout << k << endl;
    }
 
 
    
}