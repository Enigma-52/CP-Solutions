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
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int s1=0,s2=0;
        for(int i=0;i<n-1;i++)
        {
           s1=s1+a[i];
           s2=s2+b[i];
        }
        if(s1<s2) cout << "Alice" << endl;
        else if(s2<s1) cout << "Bob" << endl;
        else cout << "Draw" << endl;
    }
    
    
}