#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);

	int count = 0;
	int x[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};

	for(int i = 0; i < 8; i++)
	{
		count += n / x[i];
		n %= x[i];
	}

	printf("%d",count);
	return (0);
}
