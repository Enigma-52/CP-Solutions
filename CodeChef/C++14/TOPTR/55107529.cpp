#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.length();
    int c=0;
    int a[8]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='I') a[0]++;
        if(s[i]=='N') a[1]++;
        if(s[i]=='C') a[2]++;
        if(s[i]=='E') a[3]++;
        if(s[i]=='P') a[4]++;
        if(s[i]=='T') a[5]++;
        if(s[i]=='O') a[6]++;
        if(s[i]=='N') a[7]++;
    }
    int cnt=0;
    for(int i=1;i<8;i++)
    {
        if(a[i]<1) cnt++;
    }
    if(cnt==0 && a[0]>=2)
    {
        cout << "yes" ;
    }
    else cout <<"no";
}






    




    









    


        


