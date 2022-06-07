#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
 
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
    
    
       
       ll a[4];
       for(int i=0;i<4;i++)
        {
            cin >> a[i];
        }
        int n=4;
        sort(a,a+n);
        cout << a[n-1]-a[0] << " " << a[n-1]-a[1] << " " << a[n-1]-a[2] << endl;
 
       
 
 
    
}