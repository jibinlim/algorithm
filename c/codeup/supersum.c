#include <stdio.h>
#include <stdlib.h>

int  dp[15][15] = {0,};

int supersum(int k, int n)
{
	for(int i = 1; i <= n; i++)
		dp[0][i] = i;
	for(int i = 1; i <= k; i++)
		for(int j = 1; j <= n; j++)
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	return (dp[k][n]);
}

int main(void)
{
	int n,k;
	while(scanf("%d %d",&k,&n) != EOF)
		printf("%d\n", supersum(k,n));
	return (0);
}
