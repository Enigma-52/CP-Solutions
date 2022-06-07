#include<bits/stdc++.h>
using namespace std;


int fact(int x) 
{
    // We will store all factors in `result`
    vector <int> result;
    int i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) 
    {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) 
        {
            result.push_back(i);
            // Handle the casexplained in the 4th
            if(x/i != i) 
            {
                result.push_back(x/i);
            }
        }
        i++;
    }
    return result.size();
}

int main()
{

    int T;
    cin >> T;
    while(T--)
    { 
        long long n;
        cin >> n;
        long long k=fact(n-1);
        k=k+1;
        k=k-1;
        cout << k << endl;
        
        

    }

    
}


