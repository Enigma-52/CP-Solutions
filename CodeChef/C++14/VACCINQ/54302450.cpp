#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n,p,x,y;
       cin >> n >> p >> x >> y;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin >> a[i];
       }
       int sum=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==0) sum=sum+x;
           else if(a[i]==1) sum=sum+y;
           if(i==(p-1)) break;
       }
       cout << sum << endl;
    }
}