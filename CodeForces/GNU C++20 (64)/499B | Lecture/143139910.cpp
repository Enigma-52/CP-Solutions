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
 
    ll n,m;
    cin >> n >> m;
    vector<pair<string,string>> v;
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        v.push_back(pair<string,string>(s1,s2));
    }
    while(n--)
    {
        string s;
        cin >> s;
        for(int j=0;j<m;j++)
        {
            if(s==v[j].first)
            {
                string k="";
                if(v[j].first.length()<=v[j].second.length())
                {
                    k=v[j].first;
                }
                else k=v[j].second;
                cout << k << " ";
            }
        }
    }
 
}