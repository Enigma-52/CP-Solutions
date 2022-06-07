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
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll a[n][k]={0};
        if(n==1 && k==1)
        {
            cout << "YES" <<endl;
            cout << 1 << endl;
            continue;
        }
        int h=1;
        int g=2;
        int f=0;
        int x=n*k;
        for(int i=0;i<n;i++)
        {
            if(i==0 || i%2==0)
            {
            for(int j=0;j<k;j++)
            {
                a[i][j]=h;
                if(a[i][j]>x) f=1;
                h=h+2;
            }
            }
            if(i%2!=0)
            {
                for(int j=0;j<k;j++)
                {
                    a[i][j]=g;
                    if(a[i][j]>x) f=1;
                    g=g+2;
                }
            }
        }
        if(f==1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
 
            cout << "YES" << endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<k;j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
 
            }
        }
    }
 
 
 
}