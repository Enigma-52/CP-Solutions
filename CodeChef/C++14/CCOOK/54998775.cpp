#include<bits/stdc++.h>
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
    
    int t;
    cin >> t;
    while(t--)
    {
       
        int a[5];
        int c=0;
        for(int i=0;i<5;i++)
        {
            cin >> a[i];
            if(a[i]==1) c++;

        }
        if(c==0) cout << "Beginner" << endl;
        if(c==1) cout << "Junior Developer"<< endl;
        if(c==2) cout << "Middle Developer"<< endl;
        if(c==3) cout << "Senior Developer"<< endl;
        if(c==4) cout << "Hacker"<< endl;
        if(c==5) cout << "Jeff Dean"<< endl;


    }
    
}
