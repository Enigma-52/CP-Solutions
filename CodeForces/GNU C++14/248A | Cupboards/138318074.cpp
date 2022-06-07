#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    long long n;
    cin >> n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
    {
        cin >> l[i] >> r[i];
    }
    int l1=0,l0=0,r1=0,r0=0;
    for(int i=0;i<n;i++)
    {
        if(l[i]==1) l1++;
        else if(l[i]==0) l0++;
        if(r[i]==1) r1++;
        else if(r[i]==0) r0++;
    }
    int s=0;
    if(r1>=r0) s=s+r0;
    else s=s+r1;
    if(l1>=l0) s=s+l0;
    else s=s+l1;
    cout << s;
    
 
 
}