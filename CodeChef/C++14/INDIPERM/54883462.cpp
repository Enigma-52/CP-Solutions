#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {

       long long n;
       cin >> n;
       int a[n]={0};
       int h=1;
       if(n==2)
       {
        cout << 2 << " " << 1 << endl ;
        continue;
       }
       for(int i=0;i<n;i++)
       {
          if(i==0) 
            {
                a[i]=h;
                h++;
                continue;
            }
            else if(h%(i+1)==0)
            {
                if((i+1)<n)
                {
                    a[i]=h+1;
                    a[i+1]=h;
                    h=h+2;
                    i++;
                }
                else if(i==(n-1) && n%2==0)
                {
                    a[i]=a[i-1];
                    a[i-1]=h;
                }
            }

       }
       for(int i=0;i<n;i++)
       {
        cout << a[i] << " ";
       }
       cout << endl;

    }



}









        