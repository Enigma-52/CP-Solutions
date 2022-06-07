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
        ll n,k,x;
        cin >> n >> k >> x;
        if(x>k)
        {
            cout << -1 <<  endl;
            continue;
        }
        if(x==k && k==n)
        {
            for(int i=0;i<n;i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        ll c=0;
        for(int i=0;i<n;i++)
        {
            if(c==x) c=0;
            cout << c << " ";
            c++;
        }
        cout << endl;
    }

}

