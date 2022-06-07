#include <iostream>
#include <bits/stdc++.h>
#include <iomanip> 
#include<string>
using namespace std;

int main()
{
	    int t;
	    cin >> t;
	    while(t--)
	    {
	        int n;
	        cin >> n;
	        int s=0,f=0;
	        while(n>0)
	        {
	            f=n%10;
	            s=(s*10) + f;
	            n=n/10;
	        }
	        cout << s << endl;
	    }
	    
	return 0;
}