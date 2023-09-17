#include <stdio.h>

int n;

void tri(int a,int x)
{
	if(a > n)
		return ;
	if(a == x)
	{
		printf("\n");
		tri(a + 1,0);
	}
	else
	{
		printf("*");
		tri(a, x + 1);
	}
}

int main(void)
{
	scanf("%d",&n);
	tri(1,0);
	return (0);
}
