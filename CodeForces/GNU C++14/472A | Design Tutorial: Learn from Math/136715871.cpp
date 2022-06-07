#include <bits/stdc++.h>
using namespace std;
 
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) c++;
    }
    if(c==2) return 1;
    else return 0;
}
int main()
{
    int n;
    cin >> n;
    for(int i=4;i<n;i++)
    {
        if(prime(i)==0 && prime((n-i))==0)
        {
            cout << i << " " << (n-i) ;
            break;
        }
    }
}