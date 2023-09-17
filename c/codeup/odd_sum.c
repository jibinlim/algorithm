#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	for(int i = 0; i < 7; i++)
	{
		scanf("%d",&n);
		if(n % 2 == 1)
			sum += n;
	}
	if(sum == 0)
		sum = -1;
	printf("%d\n",sum);
	return (0);
}
