#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        string s;
        cin >> s;
        int min=0;
        int c=0;
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') c++;
            if(s[i]=='1' && s[i+1]=='1' ) k++;
            else if(s[i]=='1' && (s[i+1]!='1' || i+1>=s.length()))
            {
                if(k>min) min=k;
                k=0;
            }
        }
        cout << (c*x) + (y*(min+1)) << endl;
        
        
    }
}
