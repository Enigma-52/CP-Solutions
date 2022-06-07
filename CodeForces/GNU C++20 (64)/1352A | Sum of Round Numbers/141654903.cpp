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
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin>>(t);
    while(t--){
        
        ll i,j,k,n,m,p,q,x,y;
        cin>>n;
        
        vector<ll> ans;
        
        ll pos = 0;
        while(n!=0){
            ll d = n%10;
            n/=10;
            ans.push_back( d*pow(10,pos) );
            pos++;
            
        }
    
        reverse(ans.begin() , ans.end());
        
        ll ct =0;
        for(i=0;i<ans.size();i++){
            if(ans[i]!=0)
                ct++;
        }
        
        cout<<ct<<"\n";
        for(i=0;i<ans.size();i++){
            if(ans[i]!=0)
                cout<<ans[i]<<" ";
        }
        cout<<"\n";
        
        
        
        
    }
}