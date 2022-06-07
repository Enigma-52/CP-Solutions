#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string s;
  while(t--)
  {
     int x;
     cin >> x;
     int y;
     cin >> y;
     int a,b,k;
     cin >> a >> b >> k ;
     for(int i=1;i<=k;i++)
     {
         x=x+a;
         y=y+b;
     }
     if(x==y) cout << "SAME PRICE" << endl;
     if(y>x) cout << "PETROL" << endl;
     if(y<x) cout << "DIESEL" << endl;
  } 
}

