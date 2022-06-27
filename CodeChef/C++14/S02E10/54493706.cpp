#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int n,x,k;
       cin >> n >> x >> k;
       int a[n];
       int b[n];
       int c=0;
       for(int i=0;i<n;i++)
       {
           cin >> a[i];
       }
       for(int i=0;i<n;i++)
       {
           cin >> b[i];
       }
        for(int i=0;i<n;i++)
       {
           if(abs(a[i]-b[i])<=k) c++;
       }
       if(c>=x) cout << "YES" << endl;
       else cout << "NO" << endl; 
   }
}