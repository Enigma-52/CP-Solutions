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
        long long a[n]={0};
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        else if(n==2)
        {
            cout << 2 << " " << 3 << endl;
            continue;
        }
        cout << 2;
        cout << " ";
        long long h=2;
        for(int i=0;i<n-1;i++)
        {
            long long k=((h*2)+1);
            cout << k << " ";
            h++;
        }
 
 
    }
 
 
 
}
 
 
 
 
 
 
 
 
 
        