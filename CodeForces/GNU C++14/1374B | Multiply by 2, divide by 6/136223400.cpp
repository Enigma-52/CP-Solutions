#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif  
  int t;
  cin >> t;
  while(t--)
  {
    long long n;
    cin >> n;
    int c=0;
    int z=0;
    while(1)
    {
      if(n==1)
      {
        z=1;
        break;
      }
      else if(n==0)
      {
        z=0;
        break;
      }
      c++;
      if(n%6==0)
      {
        n=n/6;
      }
      else n=n*2;
      
    }
    if(z==1) cout << c << endl;
    else cout << -1 << endl;
 
    }
      
}