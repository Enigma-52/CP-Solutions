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
    int a[n];
    int b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int min=b[0];
    int max=b[n-1];
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            x=i;
            break;
        } 
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==min){
           y=i;
            break;
        } 
    }
    int cnt=0;
    if(y>x)
    {
        cnt=((n-1)-y) + x;
    }
    else if(x>y)
    {
        cnt=((n-1)-y) + x-1;
    }
    cout << cnt << endl;
    
 
}