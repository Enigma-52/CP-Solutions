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
    int a[7];
    for(int i=0;i<7;i++)
    {
        cin >> a[i];
    }
    int f=0,z=0;
    int sum=0;
    int index=0;
    int i=0;
    while(1)
    {
        for(i=0;i<7;i++)
        {
            sum=sum+a[i];
            if(sum>=n)
            {
                f=1;
                index=i+1;
                break;
            }
        }
        i=0;
        if(f==1) break;
    }
    cout << index ;
 
 
}