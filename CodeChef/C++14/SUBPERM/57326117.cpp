#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll t;
   cin >> t;
   while(t--)
   {
        ll n,k;
        cin >> n >> k;
        int a[n]={0};
        std::vector<int> v;
        if(k==1 && n==1)
        {
            cout << 1 << endl;
            continue;
        }
        if(k==1)
        {
            cout << -1 << endl;
            continue;
        }
        k--;
        ll j=1;
        for(int i=0;i<k;i++)
        {
            cout << j << " ";
            j++;
        }
        j=n;
        while(j!=k)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;

   }

    



}


