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
        string s;
        cin >> s;
        int n=s.length();
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<') cnt++;
            else cnt--;
        
        if(cnt<0)
        {
            
            break;
        }
        if(cnt==0) sum=max(i+1,sum);
        }
        cout << sum << endl;
        
    }
    





}