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
        int a=0,b=0;
        int i=0;
        while(n>0)
        {
            if(i==0)
            {a=n%10;
            i++;
            }
            if(n/10==0) b=n%10;
            n=n/10;
        }
        cout << (a+b) << endl;
    }
}
