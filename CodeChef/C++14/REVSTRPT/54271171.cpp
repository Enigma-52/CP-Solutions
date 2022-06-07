#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spc=n-2;
    for(int i=0;i<n;i++)
    {
        
        for(int k=spc;k>=0;k--)
        {
            cout << " ";
        }
        for(int j=i;j>=0;j--)
        {
            cout << "*";
        }
        cout << endl;
        spc--;
    }

     
}