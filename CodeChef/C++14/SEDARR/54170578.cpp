#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n,k;
       cin >> n >> k;
       int a[n];
       int s=0;
       for(int i=0;i<n;i++)
       {
           cin >> a[i];
           s=s+a[i];
       }
       if(s%k==0)
       {
           cout << 0 << endl;
       }
       else cout << 1 << endl;
       
    
       
       
    }
    
}