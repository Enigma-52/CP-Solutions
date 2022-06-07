#include <bits/stdc++.h>

using namespace std;
int main()
{
    int r,o,c;
    cin >> r >> o >> c;
    o=20-o;
    if((c+((o*6)*6))>r) cout << "YES" ;
    else cout << "NO" ;
}


