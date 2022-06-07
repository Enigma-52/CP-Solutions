#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s1=0,s2=0;
        int a[10];
        for(int i=0;i<10;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<10;i++)
        {
            if((i+1)%2!=0) if(a[i]==1) s1++;
            if((i+1)%2==0) if(a[i]==1) s2++;
        }
        if(s2>s1) cout << 2 << endl;
        else if(s1>s2)cout <<  1 << endl;
        else cout << 0 << endl;
        
    }
}