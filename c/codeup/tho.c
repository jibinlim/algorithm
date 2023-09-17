#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	char n[201];
	scanf("%s",n);

	int count = 0;

	if(x % 3 == 1)
		count = 2;
	if(x % 3 == 2)
		count = 1;
	for(int i = 0; i < x; i++)
	{
		printf("%c",n[i]);
		count++;
		if(count == 3 && i != x - 1)
		{
			printf(",");
			count = 0;
		}
	}
	return (0);
}

