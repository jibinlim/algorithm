#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int zz = 0; zz < t; zz++)
	{
		int x = 0;
		int sum = 0;

		for(int i = 0; i < 10; i++)
		{
			scanf("%d",&x);
			if(x % 2)
				sum += x;
		}

		printf("#%d %d\n",zz+1,sum);
	}
	return (0);
}
