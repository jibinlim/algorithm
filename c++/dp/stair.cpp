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
	vector <int> stair(n + 1);

	for(int i = 0; i < n; i++)
		cin >> stair[i];

	vector <vector <int> > dp(n + 1,vector <int> (2));

	dp[0][0] = stair[0];
	dp[0][1] = 0;
	dp[1][0] = stair[1];
	dp[1][1] = dp[0][0] + stair[1];

	for(int i = 2; i < n; i++)
	{
		dp[i][0] = max(dp[i - 2][0],dp[i - 2][1]) + stair[i];
		dp[i][1] = dp[i - 1][0] + stair[i];
	}
	int mx = max(dp[n - 1][0], dp[n - 1][1]);
	cout << mx << '\n';
	return (0);
}
