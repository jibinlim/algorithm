#include <stdio.h>

int main(void)
{
	for(int x = 1; x <= 10; x++)
	{
		int sen;
		scanf("%d",&sen);

		char pali[9][9];

		for(int i = 0; i < 8; i++)
			scanf("%s",pali[i]);
		int count = 0;

		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j <= 8 - sen; j++)
			{
				int j_temp = j;
				int sen_temp = j_temp + sen - 1;
				int flag = 0;
				while(j_temp < sen_temp)
				{
					if(pali[i][j_temp] != pali[i][sen_temp])
					{
						flag = 1;
						break;
					}
					if(flag == 1)
						break;
					j_temp++;
					sen_temp--;
				}
				if(flag == 0)
					count++;
			}
		}

		for(int i = 0; i <= 8 - sen; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				int i_temp = i;
				int sen_temp = i_temp + sen - 1;
				int flag = 0;
				while(i_temp < sen_temp)
				{
					if(pali[i_temp][j] != pali[sen_temp][j])
					{
						flag = 1;
						break;
					}
					if(flag == 1)
						break;
					i_temp++;
					sen_temp--;
				}
				if(flag == 0)
					count++;
			}
		}
		printf("#%d %d\n",x,count);
	}
	return (0);
}
