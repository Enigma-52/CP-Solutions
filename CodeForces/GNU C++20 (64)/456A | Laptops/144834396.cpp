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
    std::vector<pair<int,int>> v;
    while(t--)
    {
       ll a,b;
       cin >> a >> b;
       v.push_back({a,b});
   }
       ll cnt=0;
       sort(v.begin(), v.end());
       for(int i=0;i<v.size()-1;i++)
       {
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second)
        {
            cnt++;
            break;
        }
       }
       if(cnt>0) cout << "Happy Alex" ;
       else cout << "Poor Alex" ;
 
 
 
    
 
}