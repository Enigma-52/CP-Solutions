#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long h=n;
    int c=0;
    while(h>0)
    {
        if(h%10==4 || h%10==7) c++;
        h=h/10;
    }
    if(c==4 || c==7) cout << "YES" ;
    else cout << "NO" ;
}