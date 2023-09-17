#include <stdio.h>

int power(int n, int m)
{
	if(m < 1)
		return 1;
	return n * power(n,m - 1);
}

int main(void)
{
	for(int i = 1; i <= 10; i++)
	{
		int num;
		scanf("%d",&num);
		int n,m;
		scanf("%d %d",&n,&m);

		printf("#%d %d\n",i,power(n,m));
	}
	return (0);
}
