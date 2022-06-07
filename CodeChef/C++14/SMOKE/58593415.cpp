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
        ll n,x,y;
        cin>> n >> x >> y;
        ll smoke=INT_MAX;
        ll sum=0;
        for(int i=0;i<=ceil(n/100.0);i++)
        {
            ll car=max(0.0,ceil((n-(i*100))/4.0));
            sum=(i*x) + (car*y);
            smoke=min(smoke,sum);
        }
        cout << smoke << endl;



    }  

    


   


   
}