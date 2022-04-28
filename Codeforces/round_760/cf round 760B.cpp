#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		vector<string> v(n - 2);

		for (int i = 0; i < n - 2; i++)
		{
			cin >> v[i];

		}

		string str = v[0];
		bool check = false;

		for (int i = 1; i < n - 2; i++)
		{
			if (v[i].front() == str.back())
				str += v[i].back();
			else if (v[i].front() != str.back())
			{
				check = true;
				str += v[i];
			}
		}
		if (!check)
			str += v[v.size() - 1].back();
		cout << str << endl;
	}
}