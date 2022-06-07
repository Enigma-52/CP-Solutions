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
 
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    int max=0;
    string ss="";
    for(int i=0;i<n;i++)
    {
        
            char a=s[i];
            char b=s[i+1];
            for(int j=0;j<n;j++)
            {
                if(s[j]==a && s[j+1]==b && j+1<n) cnt++;
            }
            if(cnt>=max)
            {
                max=cnt;
                ss="";
                ss=ss+a+b;
            }
            cnt=0;
        
    }
    cout << ss;
 
 
 
}