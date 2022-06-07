#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mod 1000000007
#define INF 1e9+5
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define lp(i,a,b) for(i=a;i<b;i++)
#define LP(i,a,b) for(i=a;i<=b;i++)
#define lpr(i,a,b) for(i=a;i>=b;i--)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define prnt(x) cout<<(x)<<endl
 
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef vector<vs> vvs; 
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
 
int main()
{
    fast;
    ios::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    int i=0;
   string s;
   cin >> s;
   int n=s.length();
   string ss="";
   lp(i,0,n)
   {
    char c=s[i];
    int h= (int)c-48;
    if(h>=0 && h<=9)
    {
        ss=ss+s[i];
    }
   }
   int k=ss.length();
   char a[k]={'a'};
   lp(i,0,k)
   {
    a[i]=ss[i];
   }
   sort(a,a+k);
   lp(i,0,k)
   {
     cout << a[i];
     if(i+1<k) cout << "+";
   }
 
 
 
}