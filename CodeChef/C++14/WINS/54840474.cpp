#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) c++;
    }
    if(c==2) return 1;
    else return 0;
    
}

int main()
{

    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif 

   long long a,b;
   cin >> a >> b;
   if(a>b)  cout << "Eren";
   else if(b>a) cout << "Reiner";
   else cout << "Tie";

}




        