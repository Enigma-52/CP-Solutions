#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt=0;
        int total=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') c++;
            if(s[i]=='1' || (i+1)==n)
            {
                total = total + c/k;
                c=0;
            }
        }
        cout << total <<endl;

    }
}
