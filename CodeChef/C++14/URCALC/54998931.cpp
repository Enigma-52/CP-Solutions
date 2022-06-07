#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b;
	cin>>a>>b;
	char ch;
	cin>>ch;
	if(ch=='+'){
	    cout<<fixed<<setprecision(6)<<a+b<<endl;
	}
	else if(ch=='-'){
	    cout<<fixed<<setprecision(6)<<a-b<<endl;
	}
	else if(ch=='*'){
	    cout<<fixed<<setprecision(6)<<a*b<<endl;
	}
	else{
	    cout<<fixed<<setprecision(6)<<a/b<<endl;
	}
	return 0;
}