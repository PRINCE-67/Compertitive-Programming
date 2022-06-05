#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long >v(n, -1);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		long long mxsum = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			long long sum = v[(i % n)] + v[(i + (n - 1)) % n];
			mxsum = max(sum, mxsum);
		}
		cout << mxsum << endl;
	}
	return 0;
}