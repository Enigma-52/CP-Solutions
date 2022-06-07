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
 
int isVowel(char ch)
{
    int check = 0;
    switch (ch)
     {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        check = 1;
    }
    return check;
}
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
    ll f=0;
    string k="";
 
    while(1)
    {
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i])==1 && isVowel(s[i+1])==1 && i+1<s.length())
            {
                f=55;
                k=k+s[i];
                i++;
                continue;
            }
            k=k+s[i];
        }
        s=k;
        k="";
        if(f!=55) break;
        f=0;
    }
    cout << s;
 
 
 
}
 
 