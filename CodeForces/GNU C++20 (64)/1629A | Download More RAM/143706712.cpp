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
 
void bubbleSort(int arr[], int n,int b[]) 
{ 
 
} 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {  
        ll n,k;
        cin >> n >> k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
 
        }
        for(ll i=0;i<n;i++)
        {
            cin >> b[i];
            
        }
        vector<pair<int,int>> v;
        for(ll i=0;i<n;i++)
        {
            v.push_back(pair<int,int> {a[i],b[i]});
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first<=k)
            {
                k=k+v[i].second;
            }
        }
        cout << k << endl;
    }
 
}
 
 
 
 
 
 
 
        
      