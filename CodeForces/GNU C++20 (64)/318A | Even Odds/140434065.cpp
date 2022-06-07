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
 
    long long n,k;
    cin >> n >> k;
    long long m=0,f=0;
    if(n%2==0)
    {
        m=n/2;
    }
    else m=(n+1)/2;
    if(k<=m)
    {
        f=2*k-1;
    }
    else if(k>m)
    {
        f=2*(k-m);
    }
    cout<<f<<"\n";
    return 0;
 
 
 
 
    
}