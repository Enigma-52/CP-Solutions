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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if(s.length()%2!=0)
        {
            cout << "NO" << endl;
            continue;
        }
        ll cnt=0;
        ll max=0;
        char c='a';
        sort(s.begin(), s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1]) cnt++;
            if(s[i]!=s[i+1] || i+1==n)
            {
                if(cnt>max)
                {
                    max=cnt;
                    c=s[i-1];
                }
                cnt=0;
            }
        }
        max++;
        if(max>(n/2))
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int l=0;
        int r=n-1;
        while(l<r)
        {
            cout << s[l];
            cout << s[r];
            l++;
            r--;

        }
        cout << endl;

    }


        


 
 
    
 
}