#include <stdio.h>

int dp[41][2] = {0,};

int main(void)
{
	int t;
	int n;

	scanf("%d",&t);
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;

	for(int i = 2; i <= 40; i++)
	{
		dp[i][0] = dp[i - 2][0] + dp[i - 1][0];
		dp[i][1] = dp[i - 2][1] + dp[i - 1][1];
	}
	for(int i = 0; i < t; i++)
	{
		scanf("%d",&n);
		printf("%d %d\n",dp[n][0],dp[n][1]);
	}

	return (0);
}
