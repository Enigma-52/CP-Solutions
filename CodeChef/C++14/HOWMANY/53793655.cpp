#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c=0;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    if(c<=3) cout << c;
    else cout << "More than 3 digits" ;
    
}
