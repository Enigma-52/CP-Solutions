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
    
    string s1,s2;
        cin >> s1 >> s2;
        int cnt=1;
        int k=0;
        for(int i=0;i<s2.length();i++)
        {
            if(s1[k]==s2[i])
            { cnt++;
                k++;
            }
        }
        cout << cnt << endl;
 
    
}