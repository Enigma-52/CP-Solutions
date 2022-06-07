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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll t;
   cin >> t;
   while(t--)
   {
       ll n,x,y;
       cin >> n >> x >> y;
       ll a[n];
       for(int i=0;i<n;i++)
       {
        cin >> a[i];
       }
       ll b[n];
       for(int i=0;i<n;i++)
       {
        cin >> b[i];
       }
       ll c1=0,c2=0;
       for(int i=0;i<n;i++)
       {
            if((a[i]+x)==b[i]) 
                {
                    a[i]=-1;
                    c1++;
                }
       }
       for(int i=0;i<n;i++)
       {
            if((a[i]+y)==b[i]) 
                {
                    a[i]=-1;
                    c2++;
                }
       }
       if(c1+c2==n)
       {
        cout << "Yes" << endl;
       }
       else cout << "No" << endl;

   }

    



}


