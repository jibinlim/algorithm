#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int i = 0; i < 10; i++)
	{
		int n;
		scanf("%d",&n);

		int *high = (int *)malloc(sizeof(int) * n);

		for(int j = 0; j < n; j++)
			scanf("%d",high + j);
		int count = 0;

		for(int j = 2; j < n - 2; j++)
		{
			int max = 0;
			for(int k = 0; k < 5; k++)
			{
				if(max < high[j - (2 - k)])
					max = high[j - (2 - k)];
			}
			if(max == high[j])
			{
				max = 0;
				for(int k = 0; k < 5; k++)
				{
					if(k == 2)
						continue;
					if(max < high[j - (2 - k)])
						max = high[j - (2 - k)];
				}
				count += high[j] - max;
			}
		}
		printf("#%d %d\n",i + 1, count);
		free(high);
	}
	return (0);
}
