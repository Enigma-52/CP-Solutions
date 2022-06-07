#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll r,c;
    cin >> r >> c;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a[i][j];
        }
    }
    set<pair<int,int>> s1;
    ll cnt=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='S') cnt++;
        }
        if(cnt==0)
        {
            for(int j=0;j<c;j++)
            {
                s1.insert({i,j});
            }
        }
        cnt=0;
    }
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            if(a[i][j]=='S') cnt++;
        }
        if(cnt==0)
        {
            for(int i=0;i<r;i++)
            {
                s1.insert({i,j});
            }
        }
        cnt=0;
    }
    cout << s1.size();
   
}