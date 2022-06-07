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
 
    ll n;
    cin >> n;
    ll a[n];
    std::vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b ;
        v.pb({a,b});
    }
    ll cnt=0;
    int r=0,l=0,lu=0,u=0;
    for(int i=0;i<n;i++)
    {
        int a=v[i].fs;
        int b=v[i].sec;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(a==v[j].fs)
            {
                if(b>v[j].sec) lu++;
                if(b<v[j].sec) u++;
            }
            if(b==v[j].sec)
            {
                if(a>v[j].fs) l++;
                if(a<v[j].fs) r++;
            }
            
        }
        if(min(r,min(l,min(lu,u))))
            {
                cnt++;
                
            }
            r=0;
            l=0;
            lu=0;
            u=0;
    }
    cout << cnt;
 
 
 
 
    
 
    
    
 
 
        
 
       
 
 
    
}