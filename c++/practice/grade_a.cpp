#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int k;
	cin >> k;

	for(int i = 0; i < k; i++)
	{
		int n;
		cin >> n;
		vector<int> g(n);
		for(int j = 0; j < n; j++)
			cin >> g[j];
		for(int j = 0; j < n; j++)
			for(int k = j + 1; k < n; k++)
				if(g[j] < g[k])
				{
					int temp = g[j];
					g[j] = g[k];
					g[k] = temp;
				}
		int mx = g[0];
		int mn = g[n - 1];
		int gap = 0;
		for(int j = 1; j < n; j++)
		{
			if(gap < g[j - 1] - g[j])
				gap = g[j - 1] - g[j];
		}
		cout << "Class " << i + 1 << '\n';
		cout << "Max " << mx << ", Min " << mn << ", Largest gap " << gap << '\n';
	}
	return (0);
}
