#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long n,m,a;
    cin >> n >> m >> a;
    long long ans=((m+a-1)/a)*((n+a-1)/a);   
     cout << ans;
}
 
 
 
 
 
 
 
 
 
 
        