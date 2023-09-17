#include <stdio.h>

int n,sum = 0;

void rec(int a)
{
	if(a > n)
		return;
	sum += a;
	rec(a + 1);
}

int main(void)
{
	scanf("%d",&n);
	rec(1);
	printf("%d",sum);
	return (0);
}
