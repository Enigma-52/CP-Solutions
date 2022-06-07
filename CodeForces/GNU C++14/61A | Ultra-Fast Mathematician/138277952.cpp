#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    string n,m;
    cin >> n >> m;
    //string s1=to_string(n);
    //string s2=to_string(m);
    int k=n.length();
    string s="";
    //cout << s1 << endl << s2 << endl;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]!=m[i]) s=s+"1";
        else s=s+"0";
    }
    cout << s;
    
 
 
}