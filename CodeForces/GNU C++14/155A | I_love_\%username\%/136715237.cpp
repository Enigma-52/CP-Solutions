#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max=a[0];
    int min=a[0];
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max) 
        {
            max=a[i];
            c++;
        }
        else if(a[i]<min)
        {
            min=a[i];
            c++;
        }
    }
    cout << c ;
 
}