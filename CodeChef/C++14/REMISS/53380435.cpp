#include <bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
	    cin >> t;
	    while(t--)
	    {
	       int a,b;
    	       cin >> a >> b;
    	       if(a>b) cout << a << " ";
    	       else if (b>a) cout << b << " ";
    	       cout << a+b << endl;
	       
	       
	    }
	  
	    
	return 0;
}