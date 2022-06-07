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
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    ll t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        std::vector<int> v;
        int k=0;
         if (a % 4 == 1) {k = a - 1;}
    else if (a % 4 == 2) {k = 1;}
    else if (a % 4 == 3) {k = a;}
    else {k = 0;}
 
 
 
        
        if(k==b)
        {
            cout << a << endl;
            continue;
        }
        else if((k^b)!=a)
        {
            cout << a+1 << endl;
            continue;
        }
        else
            {cout << a+2 << endl;
            continue;}
    }
 
}