#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
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
        x=x-y;
        std::vector<int> v;
        int hhh=0;
        int pp=0;
        ll k=0;
        k=k+(y*2)+x;
        if((x+y)==y)
        {
            k=k-1;
        }
        cout << k << endl;


    }


        


 
 
    
 
}