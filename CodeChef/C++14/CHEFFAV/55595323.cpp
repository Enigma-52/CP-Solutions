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

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int z=0;
        int f=0;

        for(int i=0;i<n;i++)
        {
            if(i+3<n && s[i]=='c' && s[i+1]=='o' && s[i+2]=='d' && s[i+3]=='e')
            {
                z=1;
            }
            if(i+3<n && s[i]=='c' && s[i+1]=='h' && s[i+2]=='e' && s[i+3]=='f')
            {
                if(z==1) f=1;
                else f=0;
                break;
            }
        }
        if(f==1)
        {
            cout <<"AC" << endl;
        }
        else cout << "WA" << endl;
    }


}