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
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int c=0,max=0;
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int mb=0;
        int s=0;
        int ind=0;
        for(int i=0;i<n;i++)
        {
            s=a[i]*b[i];
            if(s==max)
            {
                if(b[i]>mb)
                {
                    mb=b[i];
                     max=s;
                     ind=i;
                }
                else if(i<ind) ind=i;
            }
            if(s>max)
            {
                ind=i;
             max=s;
             mb=b[i];
            }
            

        }
        cout << ind+1 << endl;

    }

}