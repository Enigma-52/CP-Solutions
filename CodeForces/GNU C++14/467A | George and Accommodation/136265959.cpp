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
  int c=0;
  while(t--)
  {
    int p,q;
    cin >> p >> q;
    if((p+2)<=q) c++;
 
  }
  cout << c;
 
  
      
}