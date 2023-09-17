#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		long dp[101];
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;

		for(int j = 4; j <= n; j++)
			dp[j] = dp[j - 2] + dp[j - 3];
		cout << dp[n] << '\n';
	}
	return (0);
}

