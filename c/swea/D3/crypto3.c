#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int xx = 1; xx <= 10; xx++)
	{
		int n;
		scanf("%d",&n);
		int num[8001];
		for(int i = 0; i < n; i++)
			scanf("%d",&num[i]);
		int op;
		scanf("%d",&op);
		for(int i = 0; i < op; i++)
		{
			char in;
			scanf("%*c%c",&in);
			if(in == 'I')
			{
				int index;
				int count;
				scanf("%d %d",&index,&count);
				int *arr = (int *)malloc(sizeof(int) * n);
				for(int j = 0; j < n; j++)
					arr[j] = 0;
				for(int j = index, k = 0; j < n; j++, k++)
					arr[k] = num[j];
				for(int j = index + count, k = 0; j < n; j++,k++)
					num[j] = arr[k];
				for(int j = 0; j < count; j++)
				{
					int x;
					scanf("%d",&x);
					if(index < n)
					{
						num[index] = x;
						index++;
					}
				}
				free(arr);
			}
			else if(in == 'D')
			{
				int index, count;
				scanf("%d %d",&index,&count);
				for(int i = index; i + count< n; i++)
					num[i] = num[i + count];
				n -= count;
			}
			else if(in == 'A')
			{
				int add;
				scanf("%d",&add);
				for(int i = 0; i < add; i++)
				{
					int x;
					scanf("%d",&x);
					num[n] = x;
					n++;
				}
			}
		}
		printf("#%d ",xx);
		for(int i = 0; i < 10; i++)
			printf("%d ",num[i]);
		printf("\n");
		free(num);
	}
	return (0);
}
