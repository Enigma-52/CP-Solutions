#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s1,s2;
    cin >> s1 >> s2;
    int n=s1.length();
    for(int i=0;i<n;i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(std::string(s1) > s2) cout<< 1; 
    else if(std::string(s1) == s2) cout << 0;
    else cout << -1;
 
}
 
 
 
 
 
 
 
 
 
        