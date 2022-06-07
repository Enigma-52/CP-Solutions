#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;
        cin >> n;
        int m[n],c[n];
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            cin >> m[i] >> c[i];
            if(m[i]>c[i]) s1++;
            else if(c[i]>m[i]) s2++;
        }
        
        
        if(s1>s2) cout << "Mishka" ;
        else if(s1==s2) cout << "Friendship is magic!^^";
        else cout << "Chris";
        
    
}