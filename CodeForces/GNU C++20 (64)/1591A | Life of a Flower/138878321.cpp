#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int t;
    cin >> t;
    while(t--)
    {
 
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
 
        }
        int f=0;
        for(long long i=0;i<n;i++)
        {
            if(a[i]==0 && a[i+1]==0 && i+1<n)
            {
                f=1;
                break;
            }
            
        }
        if(f==1)
        {
            cout << -1 << endl;
            continue;
        }
        int h=1;
        for(long long i=0;i<n;i++)
        {
            if(a[i]==1 && a[i-1]==1 && i>=1)
            {
                h=h+5;
            }
            if(a[i]==1 && a[i-1]==0  && i>=1) h++;
            else if(a[i]==1 && i==0) h++;
        }
        cout << h << endl;
 
 
    }
 
 
}