#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int c=0;
       int a,b;
       cin >> a >> b;
       for(int i=a;i<=b;i++)
       {
           if(i%10==2 || i%10==3 || i%10==9) c++;
       }
       cout << c << endl;
       
       
       
    }
}
