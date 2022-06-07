#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c=0;
    int m,k;
    cin >> m >> k;
    while(t--)
    {
        
        int a[k];
        int s=0;
        for(int i=0;i<k;i++)
        {
            cin >> a[i];
            s=s+a[i];
        }
        int q;
        cin >> q;
        if(s>=m && q<=10) c++;
    }
    cout << c ;
    
    
}