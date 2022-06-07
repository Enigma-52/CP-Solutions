#include<bits/stdc++.h>
using namespace std;

int main()
{

  

  int n;
  cin >> n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cin >> a[i][j];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        if(i==0 && j==0)
            cout << '@' << " "; 
        else if(i==n-1 && j==n-1)
            cout << '@' << " "; 
        else if(i==0 && j==n-1)
            cout << '@' << " "; 
        else if(i==n-1 && j==0)
            cout << '@' << " "; 
        else if(i==0)
            cout << '?' << " "; 
        else if(i==n-1)
            cout << '?' << " "; 
        else if(j==0)
            cout << '?' << " "; 
        else if(j==n-1)
            cout << '?' << " "; 
        else cout << a[i][j] << " ";
    }
    cout <<endl;
}
}












        