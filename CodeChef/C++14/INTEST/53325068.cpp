#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	    int t;
	    cin >> t;
	    int k;
	    cin >> k;
	    int c=0;
	    while(t--)
	    {
	        int x;
	        cin >> x;
	        if(x%k==0) c++;
	    }
	    cout << c;
	return 0;
}