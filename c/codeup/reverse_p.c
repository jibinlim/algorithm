#include <stdio.h>

int main(void)
{
	int stack[1000];
	int x = 0;
	int n;
	scanf("%d",&n);

	for(x = 0; x < n; x++)
		scanf("%d",stack + x);

	for(int i = x - 1; i >= 0; i--)
	{
		if(i == 0)
			printf("%d",stack[i]);
		else
			printf("%d ",stack[i]);
	}
	return (0);
}
