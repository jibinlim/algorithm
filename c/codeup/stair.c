#include <stdio.h>

int main(void)
{
	int dp[100001] = {0,};
	int n;
	scanf("%d",&n);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for(int i = 4; i <= n; i++)
		dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000;
	printf("%d\n",dp[n]);
	return (0);
}
