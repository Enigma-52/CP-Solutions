#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int z=0;
        long long n;
        cin >> n;
        if(n%2==0)
        {
            cout << "0" << endl;
            continue;
        }
        else if(n<=9)
        {
            cout << "-1" << endl;
            continue;
        }
        else if(n>10)
        {
            string s=to_string(n);
            int cnt=0;
            cnt++;
            char c=s[0];
            int b=(int)c-48;
            int x=0;
            if(b%2==0)
            {
                cnt=1;
                z=1;
            }
            else
            {
                for(int i=1;i<s.length();i++)
                {
                    if(((int)s[i]-48)%2==0) x=1;
                }
                if(x==1)
                {
                    cout << 2 << endl;
                    continue;
                }
            }
            if(z==1) cout << cnt <<   endl;
            else if(z==0)cout << -1 << endl;
            z=0;
        }
    
        
    }
    
}