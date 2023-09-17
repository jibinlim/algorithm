#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	for(int xx = 1; xx <= 10; xx++)
	{
		int n;
		scanf("%d",&n);
		int *num = (int *)malloc(sizeof(int) * n);
		int *arr = (int *)malloc(sizeof(int) * n);
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&num[i]);
			arr[i] = 0;
		}
		int op;
		scanf("%d",&op);
		int k;
		for(int i = 0; i < op; i++)
		{
			char x;
			int index,count;
			scanf("%*c%c %d %d",&x,&index,&count);
			for(int j = 0; j < n; j++)
				arr[j] = 0;
			for(int j = index, k = 0; j < n; j++,k++)
				arr[k] = num[j];
			for(int j = index + count, k = 0; j < n ; k++,j++)
				num[j] = arr[k];
			while(count > 0)
			{
				int x;
				scanf("%d",&x);
				if(index < n)
				{
					num[index] = x;
					index++;
				}
				count--;
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

