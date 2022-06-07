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
    
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        string h="";
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1] && i+1<n)
            {
                cnt++;
                h=h+s[i];
                i++;
            }
            else h=h+s[i];
        }
        if(cnt==n/2)
        {
            h=h+s[0];
        }
        cout << h << endl;
    }
}