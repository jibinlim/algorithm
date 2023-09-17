#include <stdio.h>

void hanoi_1(int n,int a,int b)
{
	if(n > 1)
		hanoi_1(n - 1,a,6 - a - b);
	printf("%d %d\n",a,b);
	if(n > 1)
		hanoi_1(n - 1,6 - a - b, b);
}

void hanoi(int n,int a,int b,int *count)
{
	if(n > 1)
		hanoi(n - 1, a, 6 - a - b, count);
	(*count)++;
	if(n > 1)
		hanoi(n - 1, a, 6 - a - b, count);
}
int main(void)
{
	int n;
	scanf("%d",&n);

	int count = 0;
	hanoi(n,1,3,&count);
	printf("%d\n",count);
	hanoi_1(n,1,3);
	return (0);
}
