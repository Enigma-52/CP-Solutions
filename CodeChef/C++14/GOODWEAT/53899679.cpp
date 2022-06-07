#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[7];
        for(int i=0;i<7;i++)
        cin >> a[i];
        int c=0;
        int f=0;
        for(int i=0;i<7;i++)
        {
            if(a[i]==1) c++;
            else f++;
        }
        if(c>f) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}

