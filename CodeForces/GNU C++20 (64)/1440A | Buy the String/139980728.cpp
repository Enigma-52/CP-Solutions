#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
 
    int T;
    cin >> T;
    while(T--)
    { 
        int n,c0,c1,h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                sum=sum+min(c0,h+c1);
            }
            if(s[i]=='1')
            {
                sum=sum+min(c1,h+c0);
            }
        }
        cout << sum << endl;
 
 
 
 
    }
}
 
       
 
 
 