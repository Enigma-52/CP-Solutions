#include<bits/stdc++.h>
using namespace std;
 
int isprime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) c++;
    }
    if(c==2) return 1;
    else return 0;
    
}
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int n,m;
   cin >> n >> m;
   int z=1;
   int p=1;
   for(int j=n+1;j<=m;j++)
   {
       if(isprime(j)==1)
       {
        if(j==m) cout << "YES";
        else cout << "NO";
         return 0;                                  
       }
   }
   cout << "NO";
}
 
 
 
 
        