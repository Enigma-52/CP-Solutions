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
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i==(n-1))
            {
                sum=sum+i+i;
                cout << i << " " << i << " " ;
                break;
            }
            cout << i << " ";
            sum=sum+i;
        }
        long long result =1;
        while (n != 0) {
        result *= 2;
        --n;
        }
        cout << result-sum << endl;




    }

}