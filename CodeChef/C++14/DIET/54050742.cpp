#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int proten=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if((a[i]+proten)-k>=0)
            {
                c++;
                proten=((a[i]+proten)-k);
            }
            else if((a[i]+proten)-k<0)
            {
                break;
            }
        }
        if(c==n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << (c+1) << endl;
        }
        
    }
    
}
