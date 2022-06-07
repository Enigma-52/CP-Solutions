#include<bits/stdc++.h>
using namespace std;

int main()
{



    int t;
    cin >> t;
    while(t--)
    {
    	long long n;
    	cin >> n;
    	long long a[n];
    	long long sum=0;
    	int cnt=0;
    	for(int i=0;i<n;i++)
    	{
    		cin >> a[i];
    		if(a[i]<0) cnt++;
    	}
    	if(cnt==n)
    	{
    		cout << "-1";
    		return 0;
    	}
    	int max_sum = INT_MIN;
    	int k=1;
    	int arr[n+1]={0};
    	int h=n;
    while(k<=(n+1))
    {
    	for (int i = 0; i < n - k + 1; i++) 
    	{
        int current_sum = 0;
        for (int j = 0; j < k; j++)
            current_sum = current_sum + a[i + j];
 
        // Update result if required.
        max_sum = max(current_sum, max_sum);
    	}
    	arr[k]=max_sum;
    	k++;
	}
	sort(arr,arr+n);

     cout<< arr[n] << endl;
    }

    }

 








        