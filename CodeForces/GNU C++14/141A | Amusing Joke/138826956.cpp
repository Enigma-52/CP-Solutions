#include<bits/stdc++.h>
using namespace std;
string a;
int pas = 1, num;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
     int n=s3.size();
     s1=s1+s2;
     int m=s1.size();
     int cnt=0;
     int co=0;
     int z=0;
     if(m<n)
     {
        cout << "NO";
        return 0;
     }
     for(int i=0;i<m;i++)
     {
        char c=s1[i];
        for(int j=0;j<m;j++)
        {
            if(c==s1[j]) co++;
        }
        for(int j=0;j<n;j++)
        {
            if(c==s3[j]) cnt++;
        }
        if(co==cnt) continue;
        else
        {
            z=1;
            break;
        }
     }
     if(z==1) cout << "NO";
     else cout << "YES";
}
 
        