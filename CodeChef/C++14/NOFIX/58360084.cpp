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
 
 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        std::vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        ll cnt=0;
        for(int i=0;i<v.size();i++)
        {
            
            if(v[i]==i+1)
            {
                v.insert(v.begin() + i, 0);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
   
}