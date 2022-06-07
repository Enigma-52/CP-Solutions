#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       if(n<21)
       {
           cout << "NO" << endl;
           continue;
       }
       else if(n%21==0)
       {
           cout << "YES" << endl;
           continue;
       }
       else if(n>=21) cout << "YES" << endl;
       
   }
}