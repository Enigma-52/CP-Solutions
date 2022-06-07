#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int a[n];
    string s="";
    cin >> s;
    int p,q;
    p=0;
    q=0;
    for(int i=0;i<n;i++)
    {
        a[i]=s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            p++;
        }
        if(a[i]=='D')
        {
            q++;
        }
        
    }
    if(p>q) cout << "Anton";
    if(q>p) cout << "Danik";
    if(p==q) cout << "Friendship";
    
}
 
    
        
        
        
 
       
  