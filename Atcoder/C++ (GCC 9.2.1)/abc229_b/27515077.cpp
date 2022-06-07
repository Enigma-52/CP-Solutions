#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >> a >> b;
    int h=0,g=0;
    int c=0;
    while(a>0 && b>0)
    {
        if(((a%10)+(b%10))>=10) c=1;
        a=a/10;
        b=b/10;
    }
    if(c==1) cout << "Hard" ;
    else cout << "Easy";
    
        
}