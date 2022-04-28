#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<long long>v(n, 0);

		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int  z = n - (2 * k);
		int sum = 0;

		while (z--)
		{
			auto it = v.begin();
			sum += *it;
			v.erase(it);
		}

		z = k;

		while (z--)
		{
			auto it = v.begin();
			sum += (*it) / (*(it + k));
			v.erase(it);
		}
		cout << sum << endl;
	}
}