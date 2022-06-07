#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    
        long long n,k;
        cin >> n >> k;
        long long a[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
        cin >> a[i];
        }
        if(n==1)
        {
        cout << "YES" << endl;
        continue;
        }
        for(int i=0;i<n;i++)
        {
        if(a[i]==a[i+1] && i+1<n) c++;
        }
        if(c==(n-1))
        {
            if((a[0]+a[1])>k)
            {
            cout << "NO" << endl;
            continue;
            }
        }
        sort(a,a+n);
        int f=0;
        long long min=a[0];
        long long u=k-a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>u) f=1;
        }
        if(f==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}