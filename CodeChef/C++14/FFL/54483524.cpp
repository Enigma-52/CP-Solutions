#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        s=100-s;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int i, j;
        bool f=false;
        for (i = 0; i < n-1; i++)    
        {
            for (j = 0; j < n-i-1; j++)
            {
                if (a[j] > a[j+1])
                {
                    int temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    int temp2=b[j+1];
                    b[j+1]=b[j];
                    b[j]=temp2;
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(b[i]==0)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(b[j]==1)
                    {
                        if(a[i]+a[j]<=s) f=true;
                    }
                    if(f) break;
                }
            }
            if(b[i]==1)
            {
                for(int j=i-1;j>=0;j--)
                {
                    if(b[j]==0)
                    {
                        if(a[i]+a[j]<=s) f=true;
                    }
                    if(f) break;
                }
            }
            if(f) break;
        }
        if(f==true) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    
}