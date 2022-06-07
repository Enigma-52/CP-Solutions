#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    char c= s[0];
    if(c>=65 && c<=90)
    {
        cout << s;
    }
    else
    {
        c=toupper(c);
        cout << c << s.substr(1);
    }
    
 
}
 
    
        
        
        
 
       
  