#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x>>y;
	    string s;
	    cin >> s;
	    int c=0;
	    int k=1;
	    int u=1;
	    for(int i=0;i<30;i++)
	    {
	        if(s[i]=='1') 
	        {
	            if(s[i+1]=='1')
	            {
	                k++;
	            }
	            if(s[i+1]=='0' || i==29)
	            {
	                if(k>=u) u=k;
	                k=1;
	            }
	            c++;
	        }
	        
	        
	    }
	    cout << (c*x)+(y*u)<<endl;
	}
	return 0;
}