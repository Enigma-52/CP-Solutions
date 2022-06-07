#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif  
   long long n,t;
   cin >> n >> t;
   string s;
   cin >> s;
   string q="";
   int length=s.length();
   while(t--)
   {
    for(int i=0;i<length;i++)
    {
        if(s[i]=='B' && s[i+1]=='G' && i+1<n)
        {
            q=q+"G";
            q=q+"B";
            i++;
        }
        else q=q+s[i];
    }
    s=q;
    q="";
   }
   cout << s ;
 
 
   
}