#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c;
        cin >> n >> c;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            c=c-a[i];
        }
        if(c>=0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
