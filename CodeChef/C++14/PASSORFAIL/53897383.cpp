#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,p;
        cin >> n >> x >> p;
        int s=(x*3)-(n-x);
        if(s>=p) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
}
