#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink=((k*l)/nl);
    int lime=(c*d);
    int salt=p/np;
    drink=drink/n;
    lime=lime/n;
    salt=salt/n;
    cout << min(lime , min(drink,salt));
    
 
}