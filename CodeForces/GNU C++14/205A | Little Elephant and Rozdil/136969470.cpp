#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << 1 ;
        return 0;
    }
    int  min=a[0];
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[x]) x=i;
    }
    sort(a,a+n);
    if(a[0]==a[1]) cout << "Still Rozdil" ;
    else cout << (x+1) ;
}