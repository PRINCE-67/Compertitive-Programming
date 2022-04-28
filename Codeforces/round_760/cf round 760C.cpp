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
		int n;
		cin >> n;
		vector<long long>v(n, 0);

		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		long long  left = 0;
		long long right = 0;

		for (int i = 0; i < n; i += 2)
		{
			left = gcd(left, v[i]);
		}

		for (int i = 1; i < n; i += 2)
		{
			right = gcd(right, v[i]);
		}


		bool flagl = true, flagr = true;
		for (int i = 0; i < n; i += 2)
		{
			if (v[i] % right == 0 )
			{
				flagr = false;
			}
		}

		for (int i = 1; i < n; i += 2)
		{
			if (v[i] % left == 0 )
			{
				flagl = false;
			}
		}

		if (!flagl && !flagr)
			cout << "0\n";
		else
		{
			if (flagr)
				cout << right << endl;
			else
				cout << left << endl;
		}
	}
}