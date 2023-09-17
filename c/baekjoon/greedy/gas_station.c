#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d",&n);

	unsigned long long *dis = (unsigned long long *) malloc (sizeof(unsigned long long) * (n - 1));
	for(int i = 0 ; i < n - 1; i++)
		scanf("%lld",&dis[i]);

	unsigned long long *gas = (unsigned long long *) malloc (sizeof(unsigned long long) * n);
	for(int i = 0; i < n; i++)
		scanf("%lld",&gas[i]);
	unsigned long long sum = 0;
	unsigned long long cur = gas[0];

	for(int i = 0; i < n - 1; i++)
	{
		if(cur > gas[i])
			cur = gas[i];
		sum += cur * dis[i];
	}
	printf("%lld\n",sum);
	free(dis);
	free(gas);
	return (0);
}

