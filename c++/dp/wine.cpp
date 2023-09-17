#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int main(void)
{
	int n;
	cin >> n;

	int wine[10001];
	int dp[10001];

	for(int i = 0; i < n; i++)
		cin >> wine[i];
	dp[0] = 0;
	dp[1] = wine[0];
	dp[2] = wine[0] + wine[1];
	for(int i = 3; i <= n; i++)
	{
		dp[i] = max(dp[i - 2] + wine[i - 1] , max(wine[i - 1] + wine[i - 2] + dp[i - 3],dp[i-1]));
	}

	cout << dp[n] << '\n';
	return (0);
}

