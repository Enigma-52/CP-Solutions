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
        x=x+y;
        int h=x;
        x=x+1;
        
        int c=0;
        int n=0;
        while(1)
        {
            n=x;
            for(int i=2;i<x;i++)
            {
                if(n%i==0) c++;
            }
            if(c==0)
            {
                break;
            }
            c=0;
            x++;
        }
        cout << (n-h) << endl;
    }
    
}
