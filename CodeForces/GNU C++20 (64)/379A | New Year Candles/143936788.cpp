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
 
    
        ll a,b;
        cin >> a >> b;
        ll c=0;
        while(a>=b)
        {
            c=c+b;
            a=a-b;
            a++;
        }
        cout << c+a << endl;
        
    
    
        
    
 
 
 
    
}
 
 
 
 
 