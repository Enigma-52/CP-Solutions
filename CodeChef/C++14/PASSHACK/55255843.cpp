#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while(t--)
   {


    string s;
    cin >> s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int b=(int)c;
        b=b-2;
        c=b;
        cout << c;

    }
    cout << endl; 
   
    }
}










        