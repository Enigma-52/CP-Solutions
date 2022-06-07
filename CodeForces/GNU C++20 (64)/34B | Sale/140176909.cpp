#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    
       int n,m;
       cin >> n >> m;
       int a[n];
       for(int i=0;i<n;i++)
       {
        cin >> a[i];
       }
       sort(a,a+n);
       int cnt=0;
       int sum=0;
       for(int i=0;i<n;i++)
       {
        if(a[i]<=0)
        {
            sum=sum+abs(a[i]);
            cnt++;
        }
        if(cnt==m) break;
       }
       
       
        cout << sum << endl;
       
 
    
}
 
 
 
 
 
 
 
 
 
 
        