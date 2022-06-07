#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int a[n];
        int c=0;
        int f=0;
        int z=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) c++;
            else if(a[i]==0) f++;
            if(c==n)
            {
                cout << 100 << endl;
                z=5;
                break;
            }
        }
        c=0;
        f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) c++;
            else if(a[i]==0) f++;
            if(c==m && f==0 && z!=5)
            {
            cout << k << endl;
            z=1;
            break;
            }
        }
            
        if(c<n && z!=1 ) cout << 0 << endl;;
    }
}
