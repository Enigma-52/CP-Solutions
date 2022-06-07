#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int s=0,k=0;
    int h=n;
    while(h>0)
    {
        s=h%10;
        k=(k*10) + s;
        h=h/10;
    }
    if(k==n) cout << "wins" << endl;
    else cout << "loses" << endl;
  } 
}
  