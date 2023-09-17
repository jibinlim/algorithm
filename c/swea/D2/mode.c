#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	for(int zz = 0; zz < t; zz++)
	{
		int score[101] = {0,};
		int num = 0;
		for(int i = 0; i < 1000; i++)
		{
			scanf("%d",&num);
			score[num]++;
		}
		int max = 0;
		int max_i = 0;
		for(int i = 0; i < 101; i++)
		{
			if(max <= score[i])
			{
				max_i = i;
				max = score[i];
			}
		}
		printf("#%d %d\n",zz+1,max_i);
	}
	return (0);
}
