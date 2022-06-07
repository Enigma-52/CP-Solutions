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
 
 
        string a,b;
        cin >> a >> b;
        int n=a.length();
        int m=b.length();
        if(a[n-1]!=b[m-1])
        {
            cout << n+m << endl;
            return 0;
        }
        if(a==b)
        {
            cout << 0;
            return 0;
        }
        int nn=n-1;
        int mm=m-1;
        int cnt=0;
        while(1)
        {
            if(a[nn]==b[mm])
            {
                cnt++;
                nn--;
                mm--;
             continue;
            }
            else break;
        }
        cout << (n+m)-(2*cnt) << endl;
    
 
}
 