#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
#define pb push_back
#define fs first
#define sec second
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll ind=0,f=0;
        int i=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==i+1) continue;
            else
            {
                for(int j=i;j<n;j++)
                {
                    if(a[j]==i+1)
                        {ind=j;
                        f=1;
                        break;
                    }
                }
            }
            if(f==1) break;
        }
        rvereseArray(a,i,ind);
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
 
 
    }
 
   
 
 
   
}