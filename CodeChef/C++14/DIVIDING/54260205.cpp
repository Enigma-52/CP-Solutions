#include <bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin >> n;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s=s+a[i];
        }
        long long sum=(n*(n+1))/2;
        if(s==sum) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    
}