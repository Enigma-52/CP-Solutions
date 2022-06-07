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
        ll n,d;
        cin >> n >> d;
        ll cnt=1;
        int z=0;
        for(int i=0;i<d;i++)
        {
            if(i<=9)cnt=cnt*2;
            if(i>=10) cnt=cnt*3;
            if(cnt>=n)
            {
                cout << n << endl;
                z=1;
                break;
            }
        }
        if(z==0)
        {
            cout << cnt << endl;
        }
    }
}
 
 
 