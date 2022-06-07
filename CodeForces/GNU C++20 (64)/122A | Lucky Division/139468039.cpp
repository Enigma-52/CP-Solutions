#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string s=to_string(i);
        int h=s.length();
        int c=0;
        for(int i=0;i<h;i++)
        {
            if(s[i]=='4' || s[i]=='7') continue;
            else c++;
        }
    if(c>0) continue;
    else if(n%i==0)
    {
        cout << "YES";
        return 0;
 
    }
 
    c=0;
    }
    cout << "NO";
 
 
 
    
 
 
        
 
 
    
 
}