#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
int main()
{
    fast;
    ios::sync_with_stdio(0); cin.tie(0);
    ios::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    long long s1,s2,s3,s4;
    int res=0;
    cin >> s1 >> s2 >> s3 >> s4;
    long long a[4]={s1,s2,s3,s4};
    int c=0,z=0;
    for (int i = 1; i < 4; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    cout << 3-res;
 
 
}