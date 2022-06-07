#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t>0)
	{
	    int x;
	    cin >> x;
	    if(x>=1 && x<100) cout << "Easy"  ;
	    if(x>=100 && x<200) cout << "Medium" ;
	    if(x>=200 && x<=300) cout << "Hard" ;
	    cout << endl;
	    t--;
	}
	return 0;
}
