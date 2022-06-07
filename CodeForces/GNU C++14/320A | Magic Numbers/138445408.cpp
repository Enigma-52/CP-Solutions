#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    string s;
    cin >> s;
    int n=s.length();
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(i+2<n && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i=i+2;
        }
        else if(i+1<n && s[i]=='1' && s[i+1]=='4')
        {
            i=i+1;
        }
        else if(s[i]=='1')
        {
            continue;
        }
        else f=1;
    }
    if(f==1) cout << "NO";
    else cout << "YES";
 
 
 
 
    
 
 
   
    
 
}