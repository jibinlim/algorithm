#include <stdio.h>

int fibo[201] = {0,};
int n;

void fib(int x)
{
	if(x > n)
		return ;
	fibo[x] = (fibo[x - 2] + fibo[x - 1]) % 10009;
	fib(x + 1);
}

int main(void)
{
	scanf("%d",&n);

	fibo[1] = 1;
	fibo[2] = 1;
	fib(3);
	int result = fibo[n];
	printf("%d\n",result);
	return (0);
}
