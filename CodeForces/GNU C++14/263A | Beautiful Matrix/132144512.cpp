#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    int a[5][5];
    int c=0;
    int x,y;
    int k,m;
    k=0;
    m=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
                break;
            }
        }
    }
    if(x==2 && y==2)
    {
        cout << (x-y);
    }
    else
    {
        if(x>2)
        {
          k=x-2;  
        }
        if(x<2)
        {
            k=2-x;
        }
        if(y>2)
        {
          m=y-2;  
        }
        if(y<2)
        {
            m=2-y;
        }
        k=k+m;
        cout << k;
    }
}
 
 
 
   