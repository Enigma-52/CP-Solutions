#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	    int x;
	    cin >> x;
	    float y;
	    cin >> y;
	  
	    if(x%5==0 && (x+0.5)<=y)
	    {
	        y=y-x;
	        y=y-0.50;
	    }
	    cout << y;
	return 0;
}