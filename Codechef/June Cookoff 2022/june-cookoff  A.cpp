#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		if (y <= (x + 200) && y >= x)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}