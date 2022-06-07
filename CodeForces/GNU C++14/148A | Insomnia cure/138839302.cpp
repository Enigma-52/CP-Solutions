#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    long long a[d]={0};
    if(k==1 || l==1 || m==1 || n==1)
    {
        cout << d;
        return 0;
    }
    for(int i=0;i<d;i++)
    {
        if((i+1)%k==0) a[i]=1;
        if((i+1)%l==0) a[i]=1;
        if((i+1)%m==0) a[i]=1;
        if((i+1)%n==0) a[i]=1;
    }
    int cnt=0;
    for(int i=0;i<d;i++)
    {
        if(a[i]==1) cnt++;       
    }
cout << cnt << endl;
 
 
 
}