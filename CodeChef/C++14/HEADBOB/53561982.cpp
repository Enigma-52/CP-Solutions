#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int no=0,y=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='N') no++;
        else if(s[i]=='Y') y++;
        else if(s[i]=='I') p++;
    }

    if(p>0) cout << "INDIAN" << endl;
    else if(y>0) cout << "NOT INDIAN" << endl;
     else if(y==0 && p==0) cout << "NOT SURE" << endl;
  } 
}
  