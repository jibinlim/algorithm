#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int zz = 0; zz < 10; zz++)
	{
		int dump;
		scanf("%d",&dump);
		int max = 0;
		int min = 101;
		int max_i;
		int min_i;
		int *box = (int *)malloc(sizeof(int) * 100);
		for(int i = 0; i < 100; i++)
		{
			scanf("%d",&box[i]);
			if(box[i] > max)
			{
				max = box[i];
				max_i = i;
			}
			if(box[i] < min)
			{
				min = box[i];
				min_i = i;
			}
		}
		while(dump > 0)
		{
			box[max_i]--;
			box[min_i]++;
			dump--;
			max = 0;
			min = 101;
			for(int i = 0; i < 100; i++)
			{
				if(box[i] > max)
				{
					max = box[i];
					max_i = i;
				}
				if(box[i] < min)
				{
					min = box[i];
					min_i = i;
				}
			}
		}
		printf("#%d %d\n",zz + 1,max - min);
	}
	return (0);
}
