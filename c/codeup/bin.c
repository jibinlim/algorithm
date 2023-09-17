#include <stdio.h>

void bi(int n)
{
	if(n == 0)
		return ;
	bi(n / 2);
	printf("%d",n % 2);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	if(n == 0)
		printf("%d",0);
	else
		bi(n);
	return (0);
}
