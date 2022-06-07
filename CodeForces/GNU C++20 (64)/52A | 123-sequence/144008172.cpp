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
       ll c1=0,c2=0,c3=0;
       for(ll i=0;i<n;i++)
       {
            cin >> a[i];
            if(a[i]==1) c1++;
            if(a[i]==2) c2++;
            if(a[i]==3) c3++;
       }
       std::vector<int> v;
       v.push_back(c1);
        v.push_back(c2);
        v.push_back(c3);
        sort(v.begin(), v.end());
        cout << v[0]+v[1] ;
}
 
 
 
 
 
 