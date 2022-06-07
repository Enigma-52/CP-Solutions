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
        cin >> s;
        int one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') one++;
            else if(s[i]=='0') zero++;
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(one>zero)
            {
                if(s[i]=='?')
                {
                    cout << '0';
                    zero++;
                }
                
                else cout << s[i];
                
            }
            else if(zero>one)
            {
                if(s[i]=='?')
                {
                    cout << '1';
                    one++;
                }
                
                else cout << s[i];
                
            }
            else if(one==zero)
            {
                if(s[i]=='?')
                {
                    cout << 0;
                    zero++;
                }
                else cout << s[i];
                
            }
        }
        cout << endl;
    }
}