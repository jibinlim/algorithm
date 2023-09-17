#include <stdio.h>

int main(void)
{
	for(int z = 0; z < 10; z++)
	{
		int prob;
		scanf("%d",&prob);
		int arr[100][100];
		for(int i = 0; i < 100; i++)
			for(int j = 0; j < 100; j++)
				scanf("%d",&arr[i][j]);

		int max = 0;
		int sum = 0;
		for(int i = 0; i < 100; i++)
		{
			sum = 0;
			for(int j = 0; j < 100; j++)
				sum += arr[i][j];
			if(max < sum)
				max = sum;
		}

		for(int i = 0; i < 100; i++)
		{
			sum = 0;
			for(int j = 0; j < 100; j++)
				sum += arr[j][i];
			if(max < sum)
				max = sum;
		}
		sum = 0;
		for(int i = 0, j = 0; i < 100; i++,j++)
			sum += arr[i][j];
		if(max < sum)
			max = sum;
		sum = 0;
		for(int i = 0, j = 99; i < 100; i++,j--)
			sum += arr[i][j];
		if(max < sum)
			max = sum;

		printf("#%d %d\n",z + 1, max);
	}
	return (0);
}
