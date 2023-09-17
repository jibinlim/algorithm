#include <stdio.h>

int main(void)
{
	int dp[51][51] = {0,};

	int r,c;
	scanf("%d %d",&r,&c);

	for(int i = 1; i <= c; i++)
		dp[1][i] = 1;

	for(int i = 2; i <= r; i++)
		for(int j = 1; j <= c; j++)
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 100000000;

	printf("%d\n",dp[r][c]);
	return (0);
}
