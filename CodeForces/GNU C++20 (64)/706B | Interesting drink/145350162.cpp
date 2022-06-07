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
 
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int h;
        cin >> h;
        v.push_back(h);
    }
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while(q--)
    {
        int m;
        cin >> m;
        auto up=upper_bound(v.begin(),v.end(),m);
        cout << up-v.begin() << endl;
        
 
    }
}