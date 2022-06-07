#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s,a,b,c;
        double sum=0;
        cin >> s >> a >> b >> c;
        
            sum=s+((c/100.0)*s);
            if(sum>=a && sum<=b)
            {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        
    }
    

}