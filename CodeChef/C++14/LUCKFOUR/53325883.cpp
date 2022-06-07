#include <iostream>
#include <iomanip> 
#include<string>
using namespace std;

int main()
{
	    int t;
	    cin >> t;
	    int c=0;
	    while(t--)
	    {
	        int n;
	        cin >> n;
	        string s=to_string(n);
	        for(int i=0;i<s.length();i++)
	        {
	       
	            if(s[i]=='4') c++;
	        }
	        cout << c << endl;
	        c=0;
	        
	    }
	return 0;
}