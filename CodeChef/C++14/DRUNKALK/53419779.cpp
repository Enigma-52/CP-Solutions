#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
     int k;
     cin >> k;
     int s=0;
     for (int i=1;i<=k;i++)
     {
         if(i%2!=0) s=s+3;
         if(i%2==0) s=s-1;
         
     }
         cout << s << endl;
     
     
  } 
    
}
