#include <bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
	    cin >> t;
	    int a[t];
	    for(int i=0;i<t;i++)
	    {
	        cin >> a[i];
	    }
	    int e=0,o=0;
	    for(int i=0;i<t;i++)
	    {
	        if(a[i]%2==0) e++;
	        else o++;
	    }
	    if(e>o) cout << "READY FOR BATTLE" ;
	    else cout << "NOT READY";
	  
	  
	    
	return 0;
}