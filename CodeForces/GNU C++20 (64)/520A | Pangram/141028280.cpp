#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
 
 
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
    int a[26]={0};
    for(int i=0;i<n;i++)
    {
        char ch=tolower(s[i]);
        int b=(int)ch;
        b=b-97;
        a[b]++;
    }
    int f=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            f=1;
        }
    }
    if(f==1) cout << "NO" ;
    else cout << "YES" ;
 
}