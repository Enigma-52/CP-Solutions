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
	       s1=s1+a;
	       s2=s2+b;
	       if((s1-s2)>p) p=(s1-s2); 
	       if((s2-s1)>q) q=(s2-s1);
	    }
	    if(p>q) cout << "1 " << p;
	    if(q>p) cout << "2 " << q;
	    
	return 0;
}