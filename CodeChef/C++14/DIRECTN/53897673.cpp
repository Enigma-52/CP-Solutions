#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;int f=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='L' && s[i-1]=='L')
            {
                f=1;
                break;
            }
            if(s[i]=='R' && s[i-1]=='R')
            {
                f=1;
                break;
            }
            
        }
        if(f==1)
        cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
    }
}
