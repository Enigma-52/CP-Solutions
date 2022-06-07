#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int D,d,a,b,c;
        cin >> D>> d >> a >> b >> c;
        d =d*D;
        if(d>=42) cout << c << endl;
        else if(d>=21 && d<42) cout << b << endl;
        else if(d>=10 && d<21) cout << a << endl;
        else if(d<10) cout << 0 << endl;
        
    }
    
}
