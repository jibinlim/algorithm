#include <stdio.h>

int main(void)
{
	for(int x = 1; x <= 10; x++)
	{
		int table[100][100];

		int trash;
		scanf("%d",&trash);

		for(int i = 0; i < 100; i++)
			for(int j = 0; j < 100; j++)
				scanf("%d",&table[i][j]);

		int count = 0;

		for(int i = 0; i < 100; i++)
		{
			int j = 0;
			while(j < 100)
			{
				if(table[j][i] == 1)
				{
					while(table[j][i] != 2 && j < 100)
					{
						j++;
					}
					if(table[j][i] == 2)
						count++;
				}
				j++;
			}
		}
		printf("#%d %d\n",x,count);
	}
	return (0);
}
