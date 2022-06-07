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
    
        ll n,m;
        cin >> n >> m;
        ll a[m];
        ll b[m]={0};
        for(int i=0;i<m;i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
 
//58 26
 
        // max
        sort(a,a+m);
        ll cnt=0;
        ll copy=m;
        ll cc=n;
        ll i=m-1;
        while(n--)
        {
 
            cnt=cnt+a[i];
            a[i]--;
            sort(a,a+copy);
        }
        cout << cnt << " ";
        //min
        ll sum=0;
        sort(b,b+m);
        for(int i=0;i<m;i++)
        {
            while(b[i]!=0)
            {
                cc--;
                sum=sum+b[i];
                b[i]--;
                if(cc==0)break;
            }
            if(cc==0)break;
        }
        cout << sum;
    
 
 
   
 
 
   
}