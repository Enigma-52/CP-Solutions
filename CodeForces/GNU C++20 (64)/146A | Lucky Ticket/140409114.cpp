#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int b=(int)c-48;
        if(b!=7 && b!=4)
        {
            cout << "NO";
            return 0;
        }
    }
    int c1=0,c2=0,b1=0,b2=0;
    for(int i=0;i<n/2;i++)
    {
        char c=s[i];
        int b=(int)c - 48;
        if(b==7) c1++;
        if(b==4) c2++;
    }
    for(int i=n/2;i<n;i++)
    {
        char c=s[i];
        int b=(int)c - 48;
        if(b==7) b1++;
        if(b==4) b2++;
    }
    if(c1==b1 && c2==b2)
    {
        cout << "YES" ;
    }
    else cout << "NO";
   
}