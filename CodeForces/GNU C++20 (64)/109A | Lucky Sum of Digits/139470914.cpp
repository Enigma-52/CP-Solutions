#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    int n;cin>>n;string s;
    while(n>0){
    if(n%7==0){
        n-=7;s+='7';
        
    }
    else {
        n-=4;s+='4';
    }
}
   if(n){ cout<<-1;return 0;}
   cout<<s;
 
 
}
 
 
 
 
 
 
 
    
 
 
        
 
 