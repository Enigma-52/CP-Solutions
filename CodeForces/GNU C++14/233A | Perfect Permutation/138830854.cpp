#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int n;
    cin >> n;
    if(n%2!=0)
    {
        cout << -1;
        return 0;
    }
    int a[n]={0};
    int h=1;
        for(int i=0;i<n;i++)
        {
 
 
        if(i==0 || i%2==0)
        {
            a[i]=h+1;
            a[i+1]=h;
            i++;
            h=h+2;
        }
        }
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " " ;
    }
 
 
}