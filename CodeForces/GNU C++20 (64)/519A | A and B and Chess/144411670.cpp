#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    char a[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin >> a[i][j];
        }
    }
    ll w=0,b=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='Q') w=w+9;
            if(a[i][j]=='R') w=w+5;
            if(a[i][j]=='B') w=w+3;
            if(a[i][j]=='N') w=w+3;
            if(a[i][j]=='P') w=w+1;
            if(a[i][j]=='q') b=b+9;
            if(a[i][j]=='r') b=b+5;
            if(a[i][j]=='b') b=b+3;
            if(a[i][j]=='n') b=b+3;
            if(a[i][j]=='p') b=b+1;
 
        }
    }
    if(w>b)
    { cout << "White";
return 0;
    }
    if(b>w){ cout << "Black";
    return 0;}else cout << "Draw" ;
 
 
}
    
 
 
 