#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while (T--)
    {
        int quantity;
        double price;
        cin>>quantity>>price;
        if(quantity>1000)
            cout<<fixed<<setprecision(6)<<(0.9*price*quantity)<<endl;
        else 
            cout<<fixed<<setprecision(6)<<price*quantity<<endl;
    }
    
return 0;
}