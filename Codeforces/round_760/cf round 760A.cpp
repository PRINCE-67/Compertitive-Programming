#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v(7, 0);
        for (int i = 0; i < 7; i++)
        {
            cin >> v[i];
        }
        cout << v[0] << " " << v[1] << " " << v[6] - v[0] - v[1] << endl;
    }
}