#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {//!@#$%^&*
        string s;
        cin >> s;
        int n=s.length();
        int a[4]={0};
        char c='a';
        int b=0;
        for(int i=0;i<n;i++)
        {
            c=s[i];
            if(c=='!'|| c=='@'|| c=='#'|| c=='$'|| c=='%'|| c=='^'|| c=='&'|| c=='*') a[3]++;
            b=c;
            if(b>=48 && b<=57) a[0]++;
            if(b>=65 && b<=90) a[1]++;
            if(b>=97 && b<=122) a[2]++;
            
        }
        int cnt=0;
        if(a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0  && n>=8)
        {
            cout << "Strong" << endl;
        }
        else
        { 

            cout << "Weak" << endl;
            
        }
    }

}




