#include<bits/stdc++.h>
using namespace std;
 
int distinct(int n)
{   
    int a,b,c,d;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
 
    c=n%10;
    n=n/10;
 
    d=n%10;
    
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) return 1;
    else return 0;
}
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    int y;
    cin >> y;
    y++;
    while(1)
    {
        if(distinct(y)==1)
        {
            cout << y;
            break;
        }
        else y++;
    }
 
}
 