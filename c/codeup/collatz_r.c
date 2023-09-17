#include <stdio.h>

void collatz(int n)
{
	if(n == 1)
	{
		printf("1\n");
		return ;
	}
	if(n % 2 == 0)
		collatz(n / 2);
	else
		collatz(3 * n + 1);
	printf("%d\n",n);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	collatz(n);
	return (0);
}
