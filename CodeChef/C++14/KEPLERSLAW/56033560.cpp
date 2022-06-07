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
        double t1,t2,r1,r2;
        cin >> t1 >> t2 >> r1 >> r2;
        t1=t1*t1;
        r1=r1*r1*r1;
        t1=t1/r1;
        t2=t2*t2;
        r2=r2*r2*r2;
        t2=t2/r2;
        if(t1==t2)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}
 
 
 