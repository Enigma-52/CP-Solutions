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
        ll n,x;
         cin >> n >> x;
         ll a[n];
         for(ll i=0;i<n;i++)
         {
            cin >> a[i];
         }
         sort(a,a+n);
         int cnt=0;
         int c=0;
         for(int i=n-1;i>=0;i--)
         {
            cnt=cnt+a[i];
            c++;
            if(cnt>=x)
            {
                break;
            }
         }  
         if(cnt>=x)
         {
            cout << c << endl;
         }
         else cout << -1 << endl;
    }



    
}