#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==k) c=1;
    }
    if(c==1) cout << 1;
    else cout << -1;
    
}