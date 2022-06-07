#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    long long k,n,w;
    cin >> k >> n >> w;
    long long i=0;
    long long c=0;
    while(c<=w)
    {
        i=i+c*k;
        c++;
    }
    if(i<=n) cout << 0;
    else cout << i-n;
 
 
}
 
 
 
 
 
 
 
    
 
 
        
 
 