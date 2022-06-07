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
        ll a,b,c;
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

   }

    



}


