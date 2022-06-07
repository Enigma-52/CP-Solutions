#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   
        ll a,b;
        cin >> a >> b;
        ll c=a+b;
        string s1=to_string(a);
        string s2=to_string(b);
        string s3=to_string(c);
        string k1="",k2="",k3="";
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]=='0') continue;
            k1=k1+s1[i];
        }
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]=='0') continue;
            k2=k2+s2[i];
        }
        for(int i=0;i<s3.length();i++)
        {
            if(s3[i]=='0') continue;
            k3=k3+s3[i];
        }
        int h1=stoi(k1);
        int h2=stoi(k2);
        int h3=stoi(k3);
        if((h1+h2)==h3)
        {
            cout << "YES" << endl;
        }
        else cout << "NO";
 
    
}
 