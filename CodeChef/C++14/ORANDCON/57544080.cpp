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
        ll x;
        cin >> x;
        std::vector<int> v;
        std::vector<int> h;
        ll tr=0;
        if(x==3)
        {
            cout << x-2 << " " << x-1 << " " << x << endl;
            continue;
        }
        if(x==1)
        {
            cout << 1 << " " << 3 << " " << 5 << endl;
            continue;
        }
        if(x==2)
        {
            cout << 2 << " " << 3 << " " << 4 << endl;
            continue;
        }
        if(x>3 && x%2==0)
        {
            int gg=x+1;
            cout << x << " " << gg << " " << x+2 << endl;
            continue;
        }
        if(x>3 && x%2!=0)
        {
            int k=x-2;
            cout << k << " " << x-1 << " " << x << endl;
            continue;
        }
    }


        


 
 
    
 
}