#include <stdio.h>

int n;

void rec(int x)
{
	if(n == 0)
		return ;
	else
	{
		printf("%d\n",x);
		rec(x - 1);
	}
}

int main(void)
{
	scanf("%d",&n);
	rec(n);
	return (0);
}
