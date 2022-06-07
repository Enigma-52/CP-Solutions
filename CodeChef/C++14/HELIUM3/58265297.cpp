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
 
   
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y;
        cin >> a >> b >> x >> y;
        a=a*b;
        x=x*y;
        if(x>=a)
        {
            cout << "YES" << endl;
        }
        else cout<< "NO" << endl;
    }


    

    
    


        

       


    
}
