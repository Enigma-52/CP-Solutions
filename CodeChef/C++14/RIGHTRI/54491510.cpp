#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int f=0;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double a=(abs(y1-y2)*abs(y1-y2)) + (abs(x1-x2)*abs(x1-x2));
        double b=(abs(y3-y2)*abs(y3-y2)) + (abs(x3-x2)*abs(x3-x2));
        double c=(abs(y1-y3)*abs(y1-y3)) + (abs(x1-x3)*abs(x1-x3));
        if((a+b)==c) f++;
        else if((b+c)==a) f++;
        else if((a+c)==b) f++;
    }
    cout << f ;
    
    
    
}