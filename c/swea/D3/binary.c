#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char psw[10][9] = {"0001101","0011001","0010011","0111101","0100011","0110001","0101111","0111011","0110111","0001011"};

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int xx = 1; xx <= t; xx++)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		char **arr;
		arr = (char **)malloc(sizeof(char *) * (n + 1));
		for(int i = 0; i < n; i++)
		{
			arr[i] = (char *)malloc(sizeof(char) * (m + 1));
			scanf("%s",arr[i]);
		}
		int f = 0;
		int o_sum = 0;
		int e_sum = 0;
		int j_t;
		for(int i = 0; i < n; i++)
		{
			int j = m - 1;
			while(arr[i][j] == '0' && j >= 0)
				j--;
			if(j >= 0)
			{
				j_t = j;
				j -= 55;
			}
			else
				continue;
			while(j <= j_t)
			{
				char x[8];
				int k = 0;
				while(k < 7)
				{
				x[k] = arr[i][j];
				k++;
				j++;
				}
			for(int z = 0; z < 10; z++)
			{
				if(strcmp(psw[z],x) == 0)
				{
					if(f == 0)
					{
						o_sum += z;
						f = 1;
					}
					else
					{
						e_sum += z;
						f = 0;
					}
					break;
				}
			}
			}
			break;
		}
		if((o_sum * 3 + e_sum) % 10 == 0)
			printf("#%d %d\n",xx,o_sum + e_sum);
		else
			printf("#%d 0\n",xx);
		for(int i = 0; i < n; i++)
			free(arr[i]);
		free(arr);
	}
	return (0);
}
