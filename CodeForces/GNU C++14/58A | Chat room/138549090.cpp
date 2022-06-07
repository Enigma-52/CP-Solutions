#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s="hello",ss;
    cin>>ss;
    int j = 4;
    for(int i =ss.size()-1;i>=0;i--){
        if(ss[i]==s[j]){
            s.pop_back();
            j--;
            if(j==-1)break;
        }
    }
    if(s.size()>0)cout<<"NO";
    else cout<<"YES";
    return 0;
    
}
 