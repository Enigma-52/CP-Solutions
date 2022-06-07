#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
       ll a,b,c,d;
       cin >> a >> b>> c >> d;
       ll s1=max(((3*a)/10), a-((a/250)*c));
       ll s2=max(((3*b)/10), b-((b/250)*d));
       if(s1>s2)
       {
            cout << "Misha";
            return 0;
       }
        if(s1<s2)
       {
            cout << "Vasya";
            return 0;
       }
       cout << "Tie";
    
}