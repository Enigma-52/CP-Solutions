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
 
    ll biceps=0,back=0,chest=0;
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    //chest
    for(ll i=0;i<n;i+=3)
    {
        chest=chest+a[i];
    }
    //biceps
    for(ll i=1;i<n;i+=3)
    {
        biceps=biceps+a[i];
    }
    //chest
    for(ll i=2;i<n;i+=3)
    {
        back=back+a[i];
    }
    ll maxi=max(biceps,max(back,chest));
    if(maxi==biceps)
    {
        cout << "biceps";
        return 0;
    }
    if(maxi==back)
    {
        cout << "back";
        return 0;
    }
    if(maxi==chest)
    {
        cout << "chest";
        return 0;
    }
 
 
   
}