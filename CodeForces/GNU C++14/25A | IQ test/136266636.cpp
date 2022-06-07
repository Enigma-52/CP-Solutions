#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif  
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++)
  {
     cin >> a[i];
  }
  int eve=0,odd=0,index1=0,index2=0;
  for(int i=0;i<n;i++)
  {
     if(a[i]%2==0)
     {
      eve++;
      index1=i;
     }
     if(a[i]%2!=0)
     {
      odd++;
      index2=i;
     }
  }
  if(eve==1 && odd>1) cout << (index1+1);
  else cout << (index2+1);
  
      
}