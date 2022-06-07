#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int  n;
        cin >> n;
        int k=n%4;
        if(k>=2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
