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
    string s;
    cin >>s ;
    ll n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y' && i+4<n)
        {
            s[i]='p';
            s[i+1]='a';
            s[i+2]='w';
            s[i+3]='r';
            s[i+4]='i';
            i=i+4;
        }
    }
    cout << s << endl;
}

}







        
      
