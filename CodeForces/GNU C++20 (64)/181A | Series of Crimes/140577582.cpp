#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
      int n,m;
        cin >> n >> m;
         char ch;
         int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ch;
                if(ch=='*')
                {
                x^=i+1;
                y^=j+1;
                }
            }
        }
        cout<<x<<" "<<y;
 
    }
 