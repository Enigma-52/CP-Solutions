#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    int ans_mas[100];
    cin >> n;
    int a[n];
    int b[n]={0};
    int x;
   for(int i=0;i<n;i++)
   {
       cin >> x;
       ans_mas[x-1] = i + 1;
   }
   for(int i=0;i<n;i++)
   {
       cout << ans_mas[i] << ' ';
   }
   cout << endl;
}