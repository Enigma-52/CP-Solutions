#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int a,b;
       cin >> a >> b;
       a=a+b;
       string s=to_string(a);
       int n=s.length();
       int sum=0;
       for(int i=0;i<n;i++)
       {
           char c=s[i];
           int b=(int)c -48;
           if(b==0) sum=sum+6;
           if(b==1) sum=sum+2;
           if(b==2) sum=sum+5;
           if(b==3) sum=sum+5;
           if(b==4) sum=sum+4;
           if(b==5) sum=sum+5;
           if(b==6) sum=sum+6;
           if(b==7) sum=sum+3;
           if(b==8) sum=sum+7;
           if(b==9) sum=sum+6;
           
       }
       cout << sum << endl;
       
       
    }
}