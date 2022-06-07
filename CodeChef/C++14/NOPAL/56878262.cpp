#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007

//fast factors
//count distinct array
// fast prime
// XOR(num & string)

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       string s="";
       char c='b';
       c++;
       s=s+'a';
       for(int i=1;i<n;i++)
       {
         s=s+c;
         c++;
         if(i%24==0) c='a';
       }
       cout << s << endl;
       


    }

 
 
    
}






        
      
