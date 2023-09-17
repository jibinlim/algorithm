#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	long long dp[101][11];

	for(int i = 1; i <= n; i++)
		for(int j = 0; j <= 9; j++)
		{
			if(i == 1)
			{
				dp[i][j] = 1;
				continue;
			}
			if(j == 0)
				dp[i][j] = dp[i - 1][1];
			else if(j == 9)
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]);
			dp[i][j] %= 1000000000;
		}

	long long sum = 0;
	for(int i = 1; i <= 9; i++)
		sum += dp[n][i];
	cout << sum % 1000000000 << '\n';
	return (0);
}
