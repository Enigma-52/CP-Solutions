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
        if((n-1)%4==0)
        {
            cout << "0 " << 'A' << endl;
            return 0;
        }
        if((n-1+1)%4==0)
        {
            cout << "1 " << 'A' << endl;return 0;
        }
        if((n-1+2)%4==0)
        {
            cout << "2 " << 'A' << endl;return 0;
        }
 
 
 
        if((n-3)%4==0)
        {
            cout << "0 " << 'B' << endl;return 0;
        }
        if((n-3+1)%4==0)
        {
            cout << "1 " << 'B' << endl;return 0;
        }
        if((n-3+2)%4==0)
        {
            cout << "2 " << 'B' << endl;return 0;
        }
 
 
 
        if((n-2)%4==0)
        {
            cout << "0 " << 'C' << endl;return 0;
        }
        if((n-2+1)%4==0)
        {
            cout << "1 " << 'C' << endl;return 0;
        }
        if((n-2+2)%4==0)
        {
            cout << "2 " << 'C' << endl;return 0;
        }
 
 
        if((n-0)%4==0)
        {
            cout << "0 " << 'D' << endl;return 0;
        }
        if((n-0+1)%4==0)
        {
            cout << "1 " << 'D' << endl;return 0;
        }
        if((n-0+2)%4==0)
        {
            cout << "2 " << 'D' << endl;return 0;
        }
 
    
 
 
 
    
}