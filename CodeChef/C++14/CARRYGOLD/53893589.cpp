#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if((y*(n+1))>=x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
