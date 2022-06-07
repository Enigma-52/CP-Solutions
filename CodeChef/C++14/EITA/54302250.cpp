#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d,x,y,z;
        cin >> d >> x >> y >> z;
        int w=x*7;
        int v=(y*d)+(z*(7-d));
        v=max(w,v);
        cout << v << endl;
        
        
        
    }
}