#include<bits/stdc++.h>
using namespace std;


int main()
{
  
    int t;
    cin >> t;
    while(t--)
    {

        long long x,y,p,q;
        cin >> x >> y >> p >> q;
        x=x+p*10;
        y=y+q*10;
        if(x>y) cout << "Chefina" << endl;
        else if(y>x) cout << "Chef" << endl;
        else cout << "Draw" << endl;

    }



}









        