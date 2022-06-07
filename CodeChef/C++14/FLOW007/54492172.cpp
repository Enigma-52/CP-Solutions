#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       long long n;
       cin >> n;
       int h=0,k=0;
       while(n>0)
       {
           k=(k*10)+(n%10);
           n=n/10;
       }
       cout << k << endl;
       
   }
}