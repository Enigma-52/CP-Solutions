#include<bits/stdc++.h>
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,v1,v2;
        cin >> n >> v1 >> v2;
        int h=v1;
        int g=v2;
        if((h*sqrt(2))<g)
         cout<<"Elevator"<<endl;
        else
         cout<<"Stairs"<<endl;
    }
    
}
