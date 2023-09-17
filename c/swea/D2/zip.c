#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int zz = 0; zz < t; zz++)
	{
		int n;
		scanf("%d",&n);
		int count = 0;
		char *c = (char *) malloc (sizeof(char) * (n + 1));
		int *a = (int *) malloc (sizeof(int) * n);
		for(int i = 0; i < n; i++)
		{
			scanf("%*c%c %d",&c[i],&a[i]);
		}
		printf("#%d\n",zz + 1);
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < a[i]; j++,count++)
			{
				if(count == 10)
				{
					count = 0;
					printf("\n");
				}
				printf("%c",c[i]);
			}
		}
		printf("\n");
		free(a);
		free(c);
	}
	return (0);
}
