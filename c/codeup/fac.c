#include <stdio.h>


int fac(int n)
{
	if(n == 1)
		return (1);
	else
		return n * fac(n - 1);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	int result = fac(n);
	printf("%d\n",result);
	return (0);
}
