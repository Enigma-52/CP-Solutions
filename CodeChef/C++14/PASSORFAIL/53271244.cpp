#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n,x,p;
	    cin >> n >> x>>p;
	    if((x*3)-((n-x))>=p) cout << "PASS" << endl;
	    else cout << "Fail" << endl;
	}
	return 0;
}