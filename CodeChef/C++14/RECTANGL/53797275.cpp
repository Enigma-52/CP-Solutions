#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int k[4]={a,b,c,d};

        int u=0;
        int p=0;
        if(a==0 || b==0 || c==0 || d==0) p=1;
        for(int i=0;i<4;i++)
        {
            int n=k[i];
            for(int j=0;j<4;j++)
            {
                if(k[j]==n) u++;
            }
            if(u!=2)
            p=1;
            u=0;
        }
        if(a==b && b==c && c==d && d==a) p=0;
        
        if(p==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}
