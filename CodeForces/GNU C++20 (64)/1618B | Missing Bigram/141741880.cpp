#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    vector<string> a(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> a[i];
    }
    string ans = a[0];
    for (int i = 1; i < n - 2; i++)
    {
        int k = ans.length();
        if (ans[k - 1] != a[i][0])
        {
            ans += a[i];
        }
        else
        {
            ans += a[i][1];
        }
    }
    // debug(ans);
    if (ans.length() == n)
    {
        cout << ans << endl;
        continue;
    }
    else
    {
        ans += ans.back();
        cout << ans << endl;
        continue;
    }
}
 
}