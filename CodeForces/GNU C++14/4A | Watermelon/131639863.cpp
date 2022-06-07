#include<iostream>
using namespace std;
 
int main()
{
  int a=0;
  scanf("%i", &a);
  if(a%2==0)
  {
      int k=a/2;
      if(k%2==0)
      {
    cout << "YES";
      }
      else if(a-2>0)
      {
          cout << "YES";
          
      }
      else
      {
          cout << "NO";
          
      }
      
  }
  else 
  {
      if(a&1)
    cout << "NO";
  }
}
 
 