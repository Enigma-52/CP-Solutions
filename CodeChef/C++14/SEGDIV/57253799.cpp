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
        ll a[n]={0};
        a[0]=3;
        a[1]=2;
        for(int i=2;i<n;i++)
        {
            a[i]=2+a[i-2];
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;



        



    }

}

