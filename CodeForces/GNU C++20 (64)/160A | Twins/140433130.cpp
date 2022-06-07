#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
    int cnt=1;
    int s=0;
    for(int i=n-1;i>=0;i--)
    {
        s=s+a[i];
        if(a[i]>(sum-s))
        {
            break;
        }
        else
        {
            cnt++;
            sum=sum-a[i];
        }
 
    }
    cout << cnt;
 
 
    
}