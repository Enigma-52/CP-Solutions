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
        string a[4];
        string b[4];
        for(int i=0;i<4;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<4;i++)
        {
            cin >> b[i];
        }
        int c=0;
        for(int i=0;i<4;i++)
        {

            for(int j=0;j<4;j++)
            {
                if(b[j]==a[i])
                {
                    c++;
                    break;
                } 
            }
        }
        if(c>=2) cout << "similar" << endl;
        else cout << "dissimilar" << endl;


    }
    
}
