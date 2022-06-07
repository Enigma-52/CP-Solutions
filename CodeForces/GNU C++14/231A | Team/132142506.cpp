#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    int n;
    cin >> n;
     int a,b,c;
     a=0;
     b=0;
     c=0;
     int f=0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c ;
       if((a>0 && b>0) || (a>0 && c>0) || (b>0 && c>0 ))
       {
           f++;
       }
       
        
        
    }
    cout << f;
}