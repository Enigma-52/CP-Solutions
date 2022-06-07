#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int c=0;
        while(1)
        {
            n=n-k;
            c++;
            if(n<0)
            {
                break;
            }
            else if(n<k && n>0 && n!=0)
            {
                c++;
                break;
            }
            else if(n==0)
            {
                break;
            }
            
            
        }
        cout << c << endl;
    }
}