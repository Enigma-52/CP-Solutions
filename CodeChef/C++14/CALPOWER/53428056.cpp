#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string s;
  while(t--)
  {
     cin >> s;
     sort(s.begin(),s.end());
     int k=0;
     int h=1;
     for(int i=1;i<=s.size();i++)
     {
         char c=s[i-1];
         int g= c-'a' +1;
         k=k+(g*i);
     }
     cout << k << endl;
     
     
     
      
     
  } 
    
}
