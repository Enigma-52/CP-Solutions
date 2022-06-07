#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    int n = 3;
    vector<vector<int>> a(n, vector<int>(3));
    for (int i = 0; i < n; ++i) { for (int j = 0; j < n; ++j) { cin >> a[i][j]; } }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int cnt = 0;
            cnt += a[i][j];
            if (i != 0) {
                cnt += a[i - 1][j];
            }
            if (j != 0) {
                cnt += a[i][j - 1];
            }
            if (i != n - 1) {
                cnt += a[i + 1][j];
            }
            if (j != n - 1) {
                cnt += a[i][j + 1];
            }
            cout << 1 - cnt % 2;
        } 
        cout << endl;
    }
}