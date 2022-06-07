#include<bits/stdc++.h>
using namespace std;
int main()
{

    int temp;
    cin >> temp;
    while(temp--)
    {
        int num,sum=0,hih=-1;
        cin >> num;
        map<int,int> count;
        for(int i=0;i<num;i++)
        {
            int tem;
            cin >> tem;
            count[tem]++;
        }
        for(auto i:count)
        {
            if(hih<i.second) hih=i.second;
            sum=sum+i.second;
        }
        if(hih==num) cout << "0" << endl;
        else if(hih<=1 && num>1) cout << "-1" << endl;
        else cout << (sum-hih+1) << endl;
    }

    }

