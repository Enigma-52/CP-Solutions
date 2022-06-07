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
 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        set<int> s1;
        set<int> s2;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b ;
            s1.insert(a);
            s2.insert(b);
        }
        cout << s1.size()+s2.size() << endl;

        

        
    }
    





}