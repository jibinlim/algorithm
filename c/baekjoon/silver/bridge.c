#include <stdio.h>
int dp[31][31] = {0,};
int main(void)
{
	int t;
	scanf("%d",&t);

	for(int i = 0; i < t; i++)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		if(n > m - n && m != n)
			n = m - n;
		for(int i = 0; i <= m; i++)
			for(int j = 0; j <= n; j++)
				dp[i][j] = 0;
		
		for(int i = 1; i <= m; i++)
			for(int j = 1; j <= n; j++)
			{
				if(j == 1)
					dp[i][j] = i;
				else
					dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}

		printf("%d\n",dp[m][n]);
	}
	return (0);
}
