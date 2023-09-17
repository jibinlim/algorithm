#include <stdio.h>

long long dp[10000001] = {0,};
long long  count = 0;

long long hail(long long a)
{
	if(a == 1)
		return 1;
	if(a > 10000000)
	{
		if(a % 2 == 0)
			return hail(a / 2) + 1;
		else
			return hail(3 * a + 1) + 1;
	}
	if(dp[a] != 0)
		return dp[a];
	else
	{
		if(a % 2 == 0)
				return dp[a] = hail(a / 2) + 1;
		else
				return dp[a] = hail(3 * a + 1) + 1;
	}
}




int main(void)
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long max_len = hail(a);
	long long l = a;
	for(int i = a + 1 ; i <= b; i++)
	{
		count = hail(i);
		if(max_len < count)
		{
			l = i;
			max_len = count;
		}
	}

	printf("%lld %lld",l,max_len);
	return (0);
}
