#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
int main()
{
    fast;
    ios::sync_with_stdio(0); cin.tie(0);
    ios::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long a,b,n;
    cin >> a >> b >> n;
    int z=1;
    long long an=a;
    
        for(int i=0;i<10;i++)
        {
            an=(a*10)+i;
            if(an%b==0)
            {
                z=0;
                a=an;
                break;
            }
        }
        if(z==1) cout << -1;
        if(z==0)
        {   
            cout << an;
            for(int i=0;i<n-1;i++)
            {
                cout << 0;
            }
        }
}