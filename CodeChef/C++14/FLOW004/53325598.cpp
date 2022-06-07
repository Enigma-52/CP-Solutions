#include <iostream>
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
	        string s=to_string(n);
	        s=s[0];
	        int h=stoi(s);
	        cout << (h + (n%10)) << endl;
	    }
	return 0;
}