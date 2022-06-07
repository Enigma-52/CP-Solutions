#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n=s.length();
        ll a[n]={0};
        int c=0;
        int cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
            if(s[i]=='0' || i==n-1)
            {
                a[cnt]=c;
                cnt++;
                c=0;
            }
            
        }
        sort(a,a+n);
        int sum=0;
        if(n%2==0)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(i%2!=0)
                {
                    sum=sum+a[i];
                }
            }
        }
        if(n%2!=0)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(i%2==0)
                {
                    sum=sum+a[i];
                }
            }
        }
        cout << sum << endl;
    }
 
}