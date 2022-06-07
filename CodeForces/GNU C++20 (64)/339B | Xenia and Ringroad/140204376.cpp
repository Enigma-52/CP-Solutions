#include<bits/stdc++.h>
using namespace std;
 
int x[100011];
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long n,m;
    cin >> n >> m;
    int s=1;
    long long ans=0;
    for(int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        if(t >= s) ans+=t-s;
        else ans+=n-s+t;
        s=t;
    }
    cout << ans;
 
 
       
 
    
}
 
 
 
 
 
 
 
 
 
 
        