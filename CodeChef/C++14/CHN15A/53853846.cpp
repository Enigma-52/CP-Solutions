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
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            a[i]=a[i]+k;
            if(a[i]%7==0) c++;
        }
        cout << c << endl;
        
    }
}
