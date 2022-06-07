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
        ll a1,b1,c1;
        cin >> a1 >> b1 >> c1;
        ll a2,b2,c2;
        cin >> a2 >> b2 >> c2;
        ll sum1= a1+b1+c1;
        ll sum2=a2+b2+c2;
        if(sum1>sum2)
        {
            cout << "DRAGON" << endl;
            continue;
        }
        if(sum1<sum2)
        {
            cout << "SLOTH" << endl;
            continue;
        }
        if(a1>a2)
        {
             cout << "DRAGON" << endl;
            continue;
        }
        if(a1<a2)
        {
             cout << "SLOTH" << endl;
            continue;
        }
        if(b1>b2)
        {
             cout << "DRAGON" << endl;
            continue;
        }
        if(b1<b2)
        {
             cout << "SLOTH" << endl;
            continue;
        }
        cout << "TIE" << endl;




        


    }



    
}