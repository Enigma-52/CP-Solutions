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
int odd(int n)
{
    if(n%2!=0) return 1;
    else return 0;
}
int even(int n)
{
    if(n%2==0) return 1;
    else return 0;
}


int main()
{
 
   
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        if(y<x)
        {
            cout << abs(x-y) << endl;
            continue;
        }
        if(abs(x-y)%2==0)
        {
            cout << abs(x-y)/2 << endl;
            continue;
        }        
        ll k=abs(x-y)/2;
        cout << k+2 << endl;

    }

}