#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    if(a>0 && b>0) cout << "Solution" << endl;
	    if(b==0) cout << "Solid" << endl;
	    if(a==0) cout << "Liquid" << endl;
	}
	return 0;
}