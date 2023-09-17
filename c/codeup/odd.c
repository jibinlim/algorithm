#include <stdio.h>

int a,b;

void rec(int x)
{
	if(x == b + 1)
		return;
	if(x % 2 == 1)
		printf("%d ",x);
	rec(x + 1);
}

int main(void)
{
	scanf("%d %d",&a,&b);
	rec(a);
	return (0);
}
