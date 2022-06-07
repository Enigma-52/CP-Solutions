#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s="";
        int x;
        cin >> x;
        int sum=0;
        for(int i=1;i<=x;i++)
        {
            sum=sum+90;
            if(sum==360) sum=0;
        }
        if(sum==0) s="North";
        else if (sum==90) s="East";
        else if(sum==180) s="South";
        else s="West";
        cout << s << endl;
    }
}