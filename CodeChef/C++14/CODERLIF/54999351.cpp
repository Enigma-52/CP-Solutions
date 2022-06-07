#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    bool s[30];
	    for(int i=0;i<30;i++)
	        cin>>s[i];
	    int flag=0,cnt0=0,cnt1=0;
	    for(int i=0;i<30;i++)
	    {
	        if(s[i]==1)
	            cnt1++;
	       if(cnt1>5)
	       {
	           flag=1;
	           break;
	       }
	       else if(s[i]==0)
	            cnt1=0;
	    }
	    if(flag==1)
	        cout<<"#coderlifematters"<<endl;
	    else
	        cout<<"#allcodersarefun"<<endl;
	}
	return 0;
}


