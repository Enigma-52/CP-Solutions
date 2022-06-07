#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> a[i][j];
        }
    }
    int x=0,y=0,z=0;
    for(int h=0;h<n;h++)
    {
        x=x+a[h][0];
        y=y+a[h][1];
        z=z+a[h][2];
    }
    if(x==0 && y==0 && z==0) cout << "YES" ;
    else cout << "NO" ;
    
}