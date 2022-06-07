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
        
        long long a[7];
        for(int i=0;i<7;i++)
        {
            cin >> a[i];
        }
        int h=7;
        sort(a,a+h);
        int cnt=0;
        
            if(a[2]==a[3])
            {
                cout << a[0] << " " << a[1] << " " << a[2]<< endl;
                continue;
            }
            if(a[0]+a[1]==a[2])
            {
                cout << a[0] << " " <<  a[1] << " " << a[3]<< endl;
                continue;
            }
            if(a[1]==a[0] && a[1]==a[2])
            {
                cout << a[0] << " " <<  a[1] << " " << a[2]<< endl;
                continue;
            }
            cout << a[0] << " " <<  a[1] << " " << a[2]<< endl;
                continue;
 
 
        
 
 
 
 
 
    }
}
 
 