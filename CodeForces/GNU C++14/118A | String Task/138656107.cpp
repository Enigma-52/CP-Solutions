#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s;
    cin >> s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') continue;
        cout << "." << s[i];
    }
 
 
 
}
 
 
 
 
 
 
 
 
 
        