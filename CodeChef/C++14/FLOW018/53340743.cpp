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
	       int s=1;
	       while(n>0)
	       {
	           s=s*n;
	           n--;
	       }
	       cout << s << endl;
	    }
	    
	return 0;
}