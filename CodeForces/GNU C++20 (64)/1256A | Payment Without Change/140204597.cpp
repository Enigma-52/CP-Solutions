#include<bits/stdc++.h>
using namespace std;
 
int x[100011];
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int q;
    cin >> q;
    while(q--)
    {
        long long a,b,n,s;
        cin >> a >> b >> n >> s;
        if((s%n)<=b)
        {
            if(((a*n)+b)>=s)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
 
       
 
    
}
 
 
 
 
 
 
 
 
 
 
        