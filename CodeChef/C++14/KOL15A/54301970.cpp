#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            int b=(int)c;
            if(b>=48 && b<=57)
            {
                sum=sum+(b-48);
            }
        }
        cout << sum << endl;
        
    }
    
}