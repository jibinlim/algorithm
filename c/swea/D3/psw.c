#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int xx = 1; xx <= 10; xx++)
	{
		int n;
		scanf("%d",&n);
		int *num = (int *)malloc(sizeof(int) * n);
		for(int i = 0; i < n; i++)
			scanf("%1d",&num[i]);
		int f,r;
		for(int i = 0; i < n - 1; i++)
		{
			f = i;
			r = i + 1;
			while(num[f] == -1 && f >= 0)
				f--;
			while(num[r] == -1 && r < n)
				r++;
			if(num[f] == num[r] && num[f] != -1)
			{
				while(num[f] == num[r] && f >= 0 && r < n)
				{
					num[f] = -1;
					num[r] = -1;
					f--;
					r++;
				}
			}
		}
		printf("#%d ",xx);
		for(int i = 0; i < n; i++)
		{
			if(num[i] == -1)
				continue;
			printf("%d",num[i]);
		}
		free(num);
		printf("\n");
	}
	return (0);
}
