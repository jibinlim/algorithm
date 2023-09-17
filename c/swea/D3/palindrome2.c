#include <stdio.h>

int main(void)
{
	for(int x = 1; x <= 10; x++)
	{
		int num;
		scanf("%d",&num);
		char board[101][101];
		for(int i = 0; i < 100; i++)
			scanf("%s",board[i]);
		int sen = 100;
		int max = 0;
		int flag = 0;
		int sen_temp;
		int j_temp;
		int i_temp;
		while(sen > 0)
		{
			for(int i = 0; i < 100; i++)
			{
				for(int j = 0; j <= 100 - sen; j++)
				{
					j_temp = j;
					sen_temp = j + sen - 1;
					flag = 0;
					while(j_temp < sen_temp)
					{
						if(board[i][j_temp] != board[i][sen_temp])
						{
							flag = 1;
							break;
						}
						j_temp++;
						sen_temp--;
					}
					if(flag == 0)
					{
						max = sen;
						break;
					}
				}
				if(flag == 0)
					break;
			}
			if(flag == 0)
				break;
			sen--;
		}
		sen = 100;
		while(sen > 0)
		{
			for(int i = 0; i <= 100 - sen; i++)
			{
				for(int j = 0; j < 100; j++)
				{
					i_temp = i;
					sen_temp = i + sen - 1;
					flag = 0;
					while(i_temp < sen_temp)
					{
						if(board[i_temp][j] != board[sen_temp][j])
						{
							flag = 1;
							break;
						}
						i_temp++;
						sen_temp--;
					}
					if(sen <= max || flag == 0)
					{
						if(sen > max)
							max = sen;
						flag = 0;
						break;
					}
				}
				if(flag == 0)
					break;
			}
			if(flag == 0)
				break;
			sen--;
		}
		printf("#%d %d\n",x,max);
	}
	return (0);
}
