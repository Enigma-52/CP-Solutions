#include <bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
	    cin >> t;
	    int s1=0,s2=0;
	    int p=0,q=0;
	    while(t--)
	    {
	       int a,b;
	       cin >> a >> b;
	       if(a>b) cout << ">" << endl;
	       if(b>a) cout << "<" << endl;
	       if(a==b) cout << "=" << endl;
	    }
	  
	    
	return 0;
}