#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int T;
    cin >> T;
    while(T--)
    { 
        string s;
        cin >> s;
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='N') c++;
        }
        if(c==1)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
 
 
 
 
    }
 
    
}
 
 