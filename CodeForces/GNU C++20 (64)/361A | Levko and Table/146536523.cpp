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
int odd(int n)
{
    if(n%2!=0) return 1;
    else return 0;
}
int even(int n)
{
    if(n%2==0) return 1;
    else return 0;
}
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n,k;
        cin >> n >> k;
        ll a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    a[i][j]=k;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
 
    
    
 
 
   
 
 
   
}