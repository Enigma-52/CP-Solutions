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
       int p[n];
       int s=0;
       int s2=0;
       for(int i=0;i<n;i++)
       {
           cin >> p[i];
           s2=s2+p[i];
           if(p[i]>k) p[i]=k;
           s=s+p[i];
       }
       cout << abs(s-s2) << endl;
    }
    
}
