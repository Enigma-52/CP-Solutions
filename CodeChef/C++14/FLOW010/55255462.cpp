#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin >> t;
   while(t--)
   {
    char c;
    cin >> c;
    c=tolower(c);
    if(c=='b') cout <<"BattleShip" << endl;
    if(c=='c') cout <<"Cruiser" << endl;
    if(c=='d') cout <<"Destroyer" << endl;
    if(c=='f') cout <<"Frigate" << endl;
   }
}










        