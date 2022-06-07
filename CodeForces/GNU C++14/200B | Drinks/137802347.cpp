#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int a[n];
   int s=0;
   for(int i=0;i<n;i++)
   {
       cin >> a[i];
       s=s+a[i];
   }
   double sum=s/(n*1.0);
   cout << fixed << setprecision(7) << sum;
   
}
 
 