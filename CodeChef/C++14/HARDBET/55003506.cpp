#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
       
       int a,b,c;
       cin >> a >> b >> c;
       if(a<b && a<c) cout << "Draw" << endl;
       if(b<c && b<a) cout << "Bob" << endl;
       if(c<b && c<a) cout << "Alice" << endl;
    }

}