#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    int x;
    cin >> x;
    int c=0;
    while(x>5)
    {
        c++;
        x=x-5;
    }
    cout << c+1;
 
}
 
 
 
 
 
 
 
    
 
 
        
 
 