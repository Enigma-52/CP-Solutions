#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
 
 
// 3
// 2 828
// 4 392
// 4 903
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
    ll a[n];
    ll sum=0;
    int o=0,t=0,th=0,f=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
            o++;
        if(x==2)
            t++;
        if(x==3)
            th++;
        if(x==4)
            f++;
    }
    cout<<f+th+(t*2+max(0,o-th)+3)/4<<endl;
    return 0;
 
    
 
}