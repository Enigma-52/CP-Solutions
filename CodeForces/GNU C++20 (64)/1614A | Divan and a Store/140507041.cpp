#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
    
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        long long n,l,r,k;
        cin >> n >> l >> r >> k;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
        }
        long long sum=0;
        long long cnt=0;
        sort(a,a+n);
        for(long long i=0;i<n;i++)
        {
            if(a[i]>r) continue;
            if(a[i]<l) continue;
            if(k<a[i]) break;
            if(k>=a[i])
            {
                k=k-a[i];
                cnt++;
            }
        }
        cout << cnt << endl;
 
 
 
    }
}