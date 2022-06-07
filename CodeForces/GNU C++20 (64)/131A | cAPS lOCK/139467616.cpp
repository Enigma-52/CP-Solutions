#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    string s;bool f=1;
    cin>>s;
    for(int i=1;s[i++];)if(!(isupper(s[i-1]))){f=0;break;};
    if(f)for(int i=0;s[i++];)s[i-1]^=' ';
    cout<<s<<'\n';
 
 
 
 
    
 
 
        
 
 
    
 
}