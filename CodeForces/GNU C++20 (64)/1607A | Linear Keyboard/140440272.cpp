#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
    
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        string t,s;
        cin >> t >> s;
        long long res=0;
        for(int i=1;i<s.length();i++)
           { int a1=t.find(s[i]);
            int a2=t.find(s[i-1]);
         res += abs(a1-a2);
     }
        cout << res << endl;
    }
}