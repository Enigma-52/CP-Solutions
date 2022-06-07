#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    double s=(a+b+c)/2.0;
    s=(s*(s-a)*(s-b)*(s-c));
    s=sqrt(s);
    if(s>0) cout << "YES";
    else cout << "NO" ;
    
     
}