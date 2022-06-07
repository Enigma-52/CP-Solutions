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

    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(a==1)
        {
            if(b%2!=1)
            {
                cout << "EVEN" << endl;
                continue;
            }
            else
                {
                cout << "ODD" << endl;
                continue;
            }

        }
        if(b%2!=0)
        {
            if(a%2!=1)
            {
                {
                cout << "EVEN" << endl;
                continue;
            }
            }
            else
                {
                cout << "ODD" << endl;
                continue;
            }
            
        }
        else cout << "IMPOSSIBLE"  << endl;

    }
}
 
 