#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1] && i+1<n) cnt++;      
    }
    cout << cnt;
 
 
}