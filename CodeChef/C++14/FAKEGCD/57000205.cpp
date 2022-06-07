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
        ll n;
        cin >> n;
        ll a[n];
        if(n%2==0)
        {
            a[0]=n-1;
            a[1]=n;
            for(int i=2;i<n;i++)
            {
                a[i]=i-1;;
            }


        }
        if(n%2!=0)
        {
            ll k=n;
            for(int i=0;i<n;i++)
            {
                a[i]=k--;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    }

 
 
    
}





