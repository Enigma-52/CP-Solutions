#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define for(i,a) for(int i=0;i<a;i++)


int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {   
       ll x,y,z;
       cin >> x >> y >> z;
       if(x+y<z)
       {
        cout << "PLANEBUS" << endl;
        continue;
       }
       if(x+y>z)
       {
        cout << "TRAIN" << endl;
       }
       else cout << "EQUAL" << endl;

    }
}
