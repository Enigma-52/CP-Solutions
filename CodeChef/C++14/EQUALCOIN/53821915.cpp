#include <bits/stdc++.h>

using namespace std;

class Solution

{

  public:

	void solve()

	{
       

		int x, y;

		cin >> x >> y;

		if (x == 0 and y % 2 != 0)

			cout << "NO";

		else if ((x + (y * 2)) % 2 == 0)

			cout << "YES";

		else

			cout << "NO";

		cout << endl;
		
	}

};

int main()

{

	Solution s;

	int t;

	cin >> t;

	while (t--)

	{

		s.solve();

	}

	return 0;

}
