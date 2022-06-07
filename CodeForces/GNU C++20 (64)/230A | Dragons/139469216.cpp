#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    int n,s,i;
cin>>s>>n;
pair<int,int> a[n];
for (i=0; i<n; i++)
 cin>>a[i].first>>a[i].second;
 sort(a,a+n);
 for(i=0; i<n; i++) {
 if(s>a[i].first) s+=a[i].second;
  else {cout<<"NO"; return 0;} }
 cout<<"YES";
}
 
 
 
 
    
 
 
        
 
 
    
 