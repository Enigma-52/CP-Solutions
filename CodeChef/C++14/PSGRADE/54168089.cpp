#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z,t ,a,b,c;
        cin >> x >> y >> z >> t>> a >> b >> c;
        if(a>=x && b>=y && c>=z && (a+b+c)>=t)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
    
}