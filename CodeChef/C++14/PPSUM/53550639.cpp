#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int ss=0;
    while(n>0)
    {
        ss=ss+n;
        n--;
    }
    return ss;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int d,n;
    int k=0;
    cin >> d >>n;
    while(d>0)
    {
        k=sum(n);
        n=k;
        d--;
    }
    cout << k<< endl;
  } 
}
  