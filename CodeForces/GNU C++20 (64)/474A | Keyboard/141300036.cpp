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
 
    char chh;
    cin >> chh;
    string s;
    cin >> s;
    string a="qwertyuiop";
    string b="asdfghjkl;";
    string c="zxcvbnm,./";
    string ss="";
    int z=0;
    if(chh=='R')
    {
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            for(int j=0;j<a.length();j++)
            {
                if(a[j]==ch)
                {
                z=1; ss=ss+a[j-1];}
                
            }
            if(z==1) 
                {
                    z=0;
                    continue;
                }
 
            for(int j=0;j<b.length();j++)
            {
                if(b[j]==ch) {ss=ss+b[j-1];
                z=1;}
            }
            if(z==1) {
                    z=0;
                    continue;
                }
            for(int j=0;j<c.length();j++)
            {
                if(c[j]==ch) ss=ss+c[j-1];
            }
            z=0;
        }
 
    }
    if(chh=='L')
    {
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            for(int j=0;j<a.length();j++)
            {
                if(a[j]==ch) {ss=ss+a[j+1];
                z=1;}
            }
            if(z==1) 
                {
                    z=0;
                    continue;
                }
                
            for(int j=0;j<b.length();j++)
            {
                if(b[j]==ch) {ss=ss+b[j+1];
                z=1;}
            }
            if(z==1) {
                    z=0;
                    continue;
                }
            for(int j=0;j<c.length();j++)
            {
                if(c[j]==ch) ss=ss+c[j+1];
            }
            z=0;
        }
 
    }
    cout << ss;
 
}
 