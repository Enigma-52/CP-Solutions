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
 
    long long n;
    cin >> n;
    long long a[n];
    int cnt=1;
    int max =0;
    if(n==1)
    {
        cout << 1 ;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1]) cnt++;
        else
        {
            if(cnt>max)
            {
                max=cnt;
            }
            cnt=1;
        }
        if(i==n-2)
        {
            if(cnt>max)
            {
                max=cnt;
            }
            cnt=1;
        }
    }
    cout << max;    
 
 
 
    
}