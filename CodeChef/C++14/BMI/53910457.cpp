#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,h;
        cin >> m >> h;
        h=h*h;
        m=m/h;
        if(m<=18) h=1;
        else if(m>18 && m<=24) h=2;
        else if(m>=25 && m<=29) h=3;
        else h=4;
        cout << h << endl;
    }
}