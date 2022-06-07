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
    string a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    string a1=a[0];
    string a2=a[n-1];
    if(string(a1)==a2)
    {
        cout << a1;
        return 0;
    }
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(string(a[i])==a1) c1++;
        else c2++;
    }
    if(c1>c2)
    {
        cout << a1;
    }
    else
    {
        cout << a2;
    }
 
 
 
        
           
        
 
}
 
 
 
 