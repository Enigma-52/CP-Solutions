#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
 
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
        ll n;
        cin >> n;
        ll a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin >> a[i];
        }
        int h=2*n;
        sort(a,a+h);
        
            ll cnt=0;
            ll k=0;
            for(int i=0;i<h;i++)
            {
                if(a[i]==k) cnt++;
                if(cnt>=2)

                { k++;
                    cnt=0;
                }
                
            }
            if(cnt==0)
            {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
            

        }
        
    }
    





