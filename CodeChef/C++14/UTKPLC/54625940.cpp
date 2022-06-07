#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       char a,b,c;
        cin >> a >> b >> c;
        char x,y;
        cin >> x >> y;
        char p[3]={a,b,c};
        int s1=0,s2=0;
        for(int i=0;i<3;i++)
        {
            if(x==p[i])
            {
                s1=i;
                break;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(y==p[i])
            {
                s2=i;
                break;
            }
        }
        if(s2<s1) cout << y << endl;
        else cout << x << endl;
   }
}


