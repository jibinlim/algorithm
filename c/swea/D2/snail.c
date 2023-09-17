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
		int snail[10][10] = {0,};
		int d = 0;
		int i;
		int j;
		int last_i = 0;
		int last_j = 0;
		int count = 1;
		while(count <= n * n)
		{
			if(d == 0)
			{
				for(j = last_j; j < n && snail[last_i][j] == 0; j++, count++)
					snail[last_i][j] = count;
				d = 1;
				last_j = j - 1;
				last_i = last_i + 1;
			}
			else if(d == 1)
			{
				for(i = last_i; i < n && snail[i][last_j] == 0; i++, count++)
					snail[i][last_j] = count;
				d = 2;
				last_i = i - 1;
				last_j = last_j - 1;
			}
			else if(d == 2)
			{
				for(j = last_j; j >= 0 && snail[last_i][j] == 0; j--, count++)
					snail[last_i][j] = count;
				d = 3;
				last_i = last_i - 1;
				last_j = j + 1;
			}
			else if(d == 3)
			{
				for(i = last_i; i >= 0 && snail[i][last_j] == 0; i--, count++)
					snail[i][last_j] = count;
				d = 0;
				last_i = i + 1;
				last_j = last_j + 1;
			}
		}
		printf("#%d\n",zz + 1);
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				printf("%d ",snail[i][j]);
			printf("\n");
		}
	}
	return (0);
}
