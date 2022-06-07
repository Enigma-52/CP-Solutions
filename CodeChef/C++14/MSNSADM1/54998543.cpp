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
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]*20 - b[i]*10;
            if(a[i]<=0) a[i]=0;
        }
        sort(a,a+n);
        cout << a[n-1] << endl;

    }
    
}
