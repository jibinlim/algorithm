#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b)
{
	if(a < b)
		return a;
	return b;
}


int main(void)
{
	int x;
	cin >> x;

	vector <int> dp(x + 1);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for(int i = 4; i <= x; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if(i % 6 == 0)
			dp[i] = min(dp[i],min(dp[i / 3] + 1,dp[i / 2] + 1));
		if(i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if(i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1,dp[i]);
	}
	cout << dp[x] << '\n';
	return (0);
}
