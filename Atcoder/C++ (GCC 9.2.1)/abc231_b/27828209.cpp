#include<bits/stdc++.h>
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    long long  n;
    cin >> n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int cnt=1,max=0;
    int ind=0;
    for(int i=0;i<n;i++)
    {
        string k=a[i];
        for(int j=0;j<n;j++)
        {   
            if(i==j) continue;
            else if(a[j]==k) cnt++;
        }   
        if(cnt>max)
        {
            ind =i;
            max=cnt;
            cnt=1;
        }
        cnt=1;
    }
    cout << a[ind];


}









        