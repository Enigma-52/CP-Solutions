#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define for(i,n) for(int i=0;i<n;i++)
int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {   
        ll n;
        cin >> n;
        ll a[n];
        for(i,n)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        ll sum=(a[n-1]-a[0])*a[n-2];
        sum=sum+1;
        sum--;
        cout << sum << endl;

    }

    

    
}
