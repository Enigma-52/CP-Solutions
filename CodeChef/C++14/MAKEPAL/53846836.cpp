#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0) c++;
        }
        if(c==n) 
        {
            cout << 0 << endl ;
            continue;
        }
        c=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0) f++; 
            if(f==2)
            {
                c=c+f/2;
                f=0;
            }
        }
        cout << c << endl;
        
       
        
    }
}
