#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
 
 
// 3
// 2 828
// 4 392
// 4 903
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    set<char> st;
    getline(cin, s);
    int le = s.size();
    for (int i = 0; i<le; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            st.insert(s[i]);
    cout << st.size() << endl;
 
}