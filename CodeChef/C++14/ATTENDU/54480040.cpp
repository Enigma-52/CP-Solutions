#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]=='1') c++;
        }
        int h=120-n;
        c=c+h;
        double percent = (c/120.0)*100.0;
        if(percent >=75.0)
        {
            cout << "YES" << endl;
            continue;
        }
        else cout << "NO" <<  endl;
    }
}