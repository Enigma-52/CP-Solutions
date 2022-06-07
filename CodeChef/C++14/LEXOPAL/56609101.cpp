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
        string s;
        cin >> s;
        ll n=s.length();
        ll l=0;
        ll r=n-1;
        ll f=0;
        while(l<r)
        {
            // cout << s[l] << " " << s[r] << endl;
            if(s[l]==s[r])
            {
                l++;
                r--;
                continue;
            }
            if(s[l]!=s[r] && (s[l]=='.' || s[r]=='.'))
            {
                l++;
                r--;
                continue;
            }
            if(s[l]!=s[r])
            {
                f=-1;
                break;
            }
        }
        if(f==-1)
        {
            cout << f << endl;;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                s[i]=s[n-1-i];
            }
            if(s[i]=='.' && s[n-1-i]=='.')
            {
                s[i]='a';
                s[n-1-i]='a';
            }
            if(s[i]=='.' && i==((n-1)/2))
            {
                s[i]='a';
            }
        }
        cout << s << endl;

    }
    
            
        



}                   