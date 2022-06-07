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
        int n;
        cin >> n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%n==0)
        {
            cout << 0 << endl;
        }
        else cout << 1 << endl;
 
 
 
    }
}