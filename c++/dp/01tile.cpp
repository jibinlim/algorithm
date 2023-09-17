#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector <int> dp(n + 1);

	dp[1] = 1;
	dp[2] = 2;

	for(int i = 3; i <= n; i++)
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;

	cout << dp[n] << '\n';
	return (0);
}

