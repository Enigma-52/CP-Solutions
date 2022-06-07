#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int n=a.length();
        int m=b.length();
        int f=0;
        string s1="",s2="";
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1] && i+1<n) continue;
            else s1=s1+a[i];
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]==b[i+1] && i+1<n) continue;
            else s2=s2+b[i];
        }
        for (int i = 0; i < max(s1.length(),s2.length()); i++)
        if (s1[i] != s2[i])
            f=1;
        if(f==1) cout << "NO" << endl;
        else cout << "YES" << endl;




    }
}



    









    


        


