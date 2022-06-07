#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long n,m;
    cin >> n >> m;
    int cnt=0;
    for(int i=0;i<=n;i++)
    {
        int k=sqrt(n-i);
        if((i + (k*k)==n))
        {
            if(((i*i)+ k)==m)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
     
}