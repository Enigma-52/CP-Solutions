#include <iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	   map<char,int> freq;
	   for(int i=0;i<s.size();i++)
	   freq[s[i]]++;
	   
	   int total=0;
	   for(auto it=freq.begin();it!=freq.end();it++)
	   {
	   if(it->second%2==0)
	   {
	       total+=it->second/2;
	   }
	   else
	   total+=(it->second/2)+1;
	   
	    }
	   cout<<total<<endl;
	    
	}
	
	return 0;
}
