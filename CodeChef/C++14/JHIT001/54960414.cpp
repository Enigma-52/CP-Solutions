#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        long long a[n];
        long long s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s=s+a[i];
        }
        long long k=s/4;
        long long kk=s-(k*4);
        cout << k << " " << kk << endl;
   }



}