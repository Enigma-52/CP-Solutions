#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int s=a+b+c;
	    int k=1;
	    if((a+b+c)<=d)
	    {
	        cout << "1" << endl;
	        continue;
	    }
	    else if((a+b)<=d) cout << "2" << endl;
	    else cout << "3" << endl;
 	}
	return 0;
}