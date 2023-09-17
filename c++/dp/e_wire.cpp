#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int index;
	vector <int>b(501);
	vector <int>dp(501);
	int rmx = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> index;
		if(rmx < index)
			rmx = index;
		cin >> b[index];
		if(b[index] > rmx)
			rmx = b[index];
	}

	int mx1;
	int mx2 = 0;
	for(int i = 1; i <= rmx; i++)
	{
		mx1 = 0;
		if(b[i] == 0)
			continue;
		for(int j = 1; j < i; j++)
		{
			if(b[j] == 0)
				continue;
			if(b[i] > b[j])
				if(dp[j] > mx1)
					mx1 = dp[j];
		}
		dp[i] = mx1 + 1;
		if(mx2 < dp[i])
			mx2 = dp[i];
	}
	cout << n - mx2 << '\n';
	return (0);
}
