#include <bits/stdc++.h>
using namespace std;
int main()
{
  int l,b;
  cin >> l >> b;
  int a=l*b;
  int p=(l+b)*2;
  if(a>p)
  {
      cout << "Area \n" << a << endl; 
  }
  if(p>a)
  {
      cout << "Peri \n" << p << endl; 
  }
  else if(p==a)
  {
      cout << "Eq \n" << a << endl; 
  }
}
