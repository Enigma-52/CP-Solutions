#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
   long long n;
   cin >> n;
   long long res=0;
   for(int i=1;i<=n;i++)
   {
     res=res + pow(2,i);
   }
   cout << (2LL << n) -2;
 
    
}