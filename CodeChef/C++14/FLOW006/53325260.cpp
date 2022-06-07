#include <iostream>
#include <iomanip> 
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
	            s=s+f;
	            n=n/10;
	        }
	        cout << s << endl;
	    }
	return 0;
}