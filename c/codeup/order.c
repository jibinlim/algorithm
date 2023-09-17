#include <stdio.h>

int main(void)
{
	int a,r,n;
	scanf("%d %d %d",&a,&r,&n);

	long long result = a * r;
	n--;
	while(n > 1)
	{
		result *= r;
		n--;
	}
	printf("%lld\n",result);
	return (0);
}
