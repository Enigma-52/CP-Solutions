#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
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
        ll x;
        cin >> x;
        string s;
        cin >> s;
        ll ch=0,ca=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='C') ca++;
            if(s[i]=='N') ch++;
            if(s[i]=='D')
            {
                ca++;
                ch++;
            }
        }
        if(ca>ch)
        {
            cout << 60*x << endl;
            continue;
        }
        if(ca==ch)
        {
            cout << 55*x << endl;
            continue;
        }
        if(ca<ch)
        {
            cout << 40*x << endl;
            continue;
        }

    }


    
}
