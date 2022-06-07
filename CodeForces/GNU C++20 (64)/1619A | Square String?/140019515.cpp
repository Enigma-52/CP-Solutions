#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        int h=n/2;
        string s1=s.substr(0,h);
        string s2=s.substr(h);
        int c=0;
        if(string(s1)==s2) c++;
        if(c==1) cout << "YES" << endl;
        else cout << "NO" << endl;
 
 
 
 
 
 
    }
}