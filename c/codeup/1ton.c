#include <stdio.h>

int n;

void rec(int x)
{
	if(x == n + 1)
		return;
	else
	{
		printf("%d\n",x);
		rec(x + 1);
	}
}

int main(void)
{
	scanf("%d",&n);
	rec(1);
	return (0);
}
