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
       int a[n];
       int f=0;
       for(int i=0;i<n;i++)
       {
        cin >> a[i];
       }
       sort(a,a+n);
       for(int i=1;i<n;i++)
       {   
        if(abs(a[i]-a[i-1])>1) f=1;
            
       }
       if(f==1) cout << "NO" << endl;
       else cout << "YES" << endl;
 
    }
}
 
 
 
 
 
 
 
 
 
 
        