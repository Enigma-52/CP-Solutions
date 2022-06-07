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
 
    
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int c1=0,c2=0,c3=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1) c1++;
            if(a[i]==2) c2++;
            if(a[i]==3) c3++;
        }
        int w =min(c1,min(c2,c3));
        cout << w << endl;
        if(w==0) return 0;
        int z1=0,z2=0,z3=0;
        for(ll i=0;i<w;i++)
        {
            for(ll j=0;j<n;j++)
            {
                    if(a[j]==1 && z1==0)
                    {
                        cout << (j+1) << " ";
                        a[j]=0;
                        z1=1;
 
                    }
                    if(a[j]==2 && z2==0)
                    {
                        cout << (j+1) << " ";
                        a[j]=0;
                        z2=1;
                    }
                    if(a[j]==3 && z3==0)
                    {
                        cout << (j+1) << " ";
                        a[j]=0;
                        z3=1;
                    }
            }
            z1=0;
            z2=0;
            z3=0;
            cout << endl;
        }
           
        
 
    }
 
 
 
 