#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
int main()
{
    fast;
    ios::sync_with_stdio(0); cin.tie(0);
    ios::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
    }
    int max=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s-a[i]+b[i];
        if(s>max) max=s;
    }
    cout << max;
 
 
 
 
 
}