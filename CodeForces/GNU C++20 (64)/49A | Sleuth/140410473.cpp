#include<bits/stdc++.h>
using namespace std;
 
bool isvowel(char ch) 
{ 
    int c=0;
    if((ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') || (ch == 'y')) c++;
    return c;
 }
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    int f=0;
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]==' ') continue;
        if(isvowel(s[i]))
        {
         f=1;
         break;
        }
        else
        {
         f=2;
         break;
        }
    }
 
    if(f==2)
    {
        cout << "NO";
    }
    if(f==1) cout << "YES";
    
}