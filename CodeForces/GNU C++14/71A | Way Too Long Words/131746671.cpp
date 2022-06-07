#include<iostream>
using namespace std;
 
int main()
{
    int n=0;
    cin >> n;
    while(n>0)
    {
        string s;
        cin >> s;
        if(s.length()>10)
        {
            cout << s[0] << (s.length()-2) << s[s.length()-1] <<endl;
        }
        else
        cout << s <<endl;
        n--;
    }
    
 
}
 
 
 
 