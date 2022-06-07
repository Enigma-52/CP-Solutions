#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int t;
    cin >> t;
    while(t--)
    {string s, t;
        cin >> s >> t;
        sort(all(s));
        vector<int> cnt(26, 0);
        for(auto x: s)cnt[x - 'a']++;
        if(t != "abc" || !cnt[0] || !cnt[1] || !cnt[2])cout << s << "\n";
        else
        {
            while(cnt[0]--)cout<<"a";
            while(cnt[2]--)cout<<"c";
            while(cnt[1]--)cout<<"b";
            for(int i = 3;i < 26; ++i)
            {
                while(cnt[i]--)cout<<char('a' + i);
            }
            cout << "\n";
        }
    }
}