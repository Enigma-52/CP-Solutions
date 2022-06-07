#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif  
  int a[3];
  int m1=0,m2=0,m3=0,m4=0;
  for(int i=0;i<3;i++)
  {
    cin >> a[i];
  }
  m1=a[0]+(a[1]*a[2]);
  m2=a[0]*(a[1]+a[2]) ;
  m3=a[0]*a[1]*a[2];
  m4=(a[0]+a[1])*a[2];
  int m5=a[0]+a[1]+a[2];
  int c=max(m1,m2);
  c=max(c,m3);
  c=max(c,m4);
  c=max(c,m5);
  cout << c;
  
      
}