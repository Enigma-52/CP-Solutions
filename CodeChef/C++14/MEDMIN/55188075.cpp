#include<bits/stdc++.h>
using namespace std;



int main()
{
    int T;
    cin >> T;
    while(T--)
    { 
        int n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long bb=a[n/2];
        long long br=a[n/2-1];

        long long sum=abs(bb-br);
        cout << sum << endl;

        

    
}
}



