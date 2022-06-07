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
        vector<ll> v;
        ll n;
        cin >> n;
        while(n)
        {
            ll i=0;
            if(v.size()==0) i=1;
            else i=v[v.size()-1]+1;
            while(1)
            {
                if(__builtin_popcount(i)%2==0 && find(v.begin(), v.end(),i)==v.end())
                {
                    v.push_back(i);
                    break;
                }
                i++;
            }
            n--;
        }
        for(auto it:v)
        {
            cout << it << " ";
        }
        cout << endl;
       // cout << __builtin_popcount(5) << endl;


    }
    
            
        



}                   