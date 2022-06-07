#include<bits/stdc++.h>
using namespace std;

int x[100011];
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q')
                cnt++;
            if(s[i]=='B') cnt=cnt+2;
        }
        cout << cnt << endl;


    }

       

    
}

 








        