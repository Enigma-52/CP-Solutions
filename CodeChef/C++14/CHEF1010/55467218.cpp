#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define for(i,a) for(int i=0;i<a;i++)


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
       int c1=0,c2=0;
       int cnt=0;
       for(i,n)
       {
        if(s[i]=='1') c1++;
        else c2++;
       }
       c1=c1-2;
       c2=c2-2;
       if(c1>=0 && c2>=0)
       {
        cnt++;
        cnt=cnt+ min(c1,c2);
       }
       cout << cnt << endl;


    }
}
