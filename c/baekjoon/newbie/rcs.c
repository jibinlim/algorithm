#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int a = 0; a < t; a++)
	{
		int n;
		scanf("%d",&n);

		int one = 0;
		int two = 0;

		for(int x = 0; x < n; x++)
		{
			char o;
			char t;
			scanf("%*c%c",&o);
			scanf("%*c%c",&t);
			if(o == 'R')
			{
				if(t == 'P')
					two++;
				if(t == 'S')
					one++;
			}
			else if(o == 'S')
			{
				if(t == 'R')
					two++;
				if(t == 'P')
					one++;
			}
			else if(o == 'P')
			{
				if(t == 'S')
					two++;
				if(t == 'R')
					one++;
			}
		}
		if(one > two)
			printf("Player 1\n");
		else if(one < two)
			printf("Player 2\n");
		else if(one == two)
			printf("TIE\n");
	}
	return (0);
}
