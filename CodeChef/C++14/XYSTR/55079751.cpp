#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; while(t--){
        string s; cin>>s;
        int n=s.size();
        int ct=0;
        for(int i=0;i<n-1;++i){
            if(s[i]!=s[i+1]){
                ++ct;
                ++i;
            }
        }
        cout<<ct<<"\n";
    }
    return 0;
}