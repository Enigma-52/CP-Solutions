#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    double salary;
    cin >> salary;
    if(salary<1500) cout << setprecision(8) << salary + (salary*0.1) + (salary*0.9) << endl ;
    else cout << setprecision(8) << salary + 500 + (0.98*salary) << endl;
  } 
}
  