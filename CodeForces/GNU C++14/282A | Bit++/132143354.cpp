#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string s="";
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if(s[0]=='+')
        {
            x=x+1;
        }
        if(s[0]=='-')
        {
            x=x-1;
        }
        
        if(s[2]=='+')
        {
            x=x+1;
        }
        if(s[2]=='-')
        {
            x=x-1;
        }
    
    }
    cout << x;
}
 