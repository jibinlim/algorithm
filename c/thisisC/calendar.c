#include <stdio.h>

int yoon(int y)
{
	if (y % 4 == 0)
	{
		if(y % 100 == 0)
		{
			if (y % 400 == 0)
				return (1);
			else
				return (0);
		}
		return (1);
	}
	return (0);
}

int monthday(int y, int m)
{
	int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (yoon(y))
	{
		day[1] = 29;
	}
	m -= 1;
	return (day[m]);
}

int main()
{
	int y,m;
	int cnt = 0;
	int startday;

	y = 1;
	m = 1;

	while(y != 0 && m != 0)
	{
		printf("\n> 년, 월을 입력하세요 (종료는 0) :");
		scanf("%d %d",&y,&m);
		if(y != 0 && m != 0)
		{
			startday = monthday(y,m) % 7;
			cnt = 0;
			printf("\t\t%d년 %d월\n",y,m);
			printf("\t\t==========\n");
			printf("--------------------------------------------\n");
			printf("   SUN   MON   TUE   WED   THU   FRI   SAT\n");
			printf("--------------------------------------------\n");
			for (int i = 0 ; i < startday ; i++)
			{
				printf("      ");
				cnt++;
			}
			for (int i = 1 ; i < monthday(y,m) + 1 ; i++)
			{
				printf("    %2d",i);
				cnt++;
				if (cnt == 7)
				{
					printf("\n");
					cnt = 0;
				}
			}
		}
	}
	return (0);
}

