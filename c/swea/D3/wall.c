#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	
	for(int xx = 1; xx <= t; xx++)
	{
		int n,a,b;
		scanf("%d %d %d",&n,&a,&b);
		int sqr_1 = 1;
		while(sqr_1 * sqr_1 < n)
			sqr_1++;
		if(sqr_1 * sqr_1 != n)
			sqr_1--;
		long long x = sqr_1 * sqr_1;
		long long y = b * (n - x);
		x++;
		int sqr_t = sqr_1;
		int sqr_2;
		long long ans = y;
		while(x <= n)
		{
			sqr_1 = sqr_t;
			while(x % sqr_1 != 0)
				sqr_1--;
			if(x % sqr_1 == 0 && sqr_1 != 1)
			{
				sqr_2 = x / sqr_1;
				y = (long long) a * (sqr_2 - sqr_1) + b * (n - sqr_1 * sqr_2);
			}
			if(y < 0)
				break;
			if(y < ans)
				ans = y;
			x++;
		}
		printf("#%d %lld\n",xx,ans);
	}
	return (0);
}
