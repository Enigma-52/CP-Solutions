#include<bits/stdc++.h>
using namespace std;
int main()
{
 

   int t;
   cin >> t;
   while(t--)
   {
    int n,m;
    cin >> n >> m;
    string temp="";
    if(n>m)
    {
        while(n>0 && m>0)
        {
            temp=temp+"01";
            n--;
            m--;
        }
        while(n!=0)
        {
            temp=temp+"010";
            n--;
        }
    }
    else if(n<m)
    {
        while(n>0 && m>0)
        {
            temp=temp+"10";
            n--;
            m--;
        }
        while(m!=0)
        {
            temp=temp+"101";
            m--;
        }
    }
    else if(m==n)
    {
        for(int i=0;i<n+1;i++)
        {
            temp=temp+"01";
        }
    }
    int p=temp.length();
    cout << p << endl;
    cout << temp << endl;


   }


}