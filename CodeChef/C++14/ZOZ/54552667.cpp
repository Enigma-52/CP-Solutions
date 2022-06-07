#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin >> t;
   while(t--)
   {    
        int n,k;
        cin >> n >> k;
        int a[n];
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum=sum+a[i];
        }
        int sum2=sum;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int h=a[i];
            sum=sum-a[i];
            if((h+k)>sum) c++;
            sum=sum2;
        }
        cout << c << endl;
   }
}