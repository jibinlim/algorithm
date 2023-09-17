#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	vector<int> a(n);

	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(),a.end());

	int m;
	cin >> m;
	vector<int> c(m);
	int input;
	for(int i = 0; i < m; i++)
	{
		cin >> input;
		int f = 0;
		int r = n - 1;

		while(f <= r)
		{
			int mid = (f + r) / 2;
			if(a[mid] == input)
			{
				c[i] = 1;
				break;
			}
			if(a[mid] < input)
			{
				f = mid + 1;
			}
			if(a[mid] > input)
			{
				r = mid - 1;
			}
		}
		cout << c[i] << '\n';
	}
	return (0);
}
