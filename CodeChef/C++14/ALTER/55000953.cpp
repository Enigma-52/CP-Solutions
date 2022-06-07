#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
       long long a,b,p,q;
       cin >> a >> b >> p >> q;
       if(p%a==0 && q%b==0)
       {
         int x=p/a;
         int y=q/b;
         if(abs(x-y)==1 || abs(x-y)==0)
         {
            cout << "YES" << endl;
            continue;
         }
         else cout << "NO" << endl;

       }
       else cout << "NO" << endl;


    }

}