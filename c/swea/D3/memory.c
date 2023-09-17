#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int x = 1; x <= t; x++)
	{
		char mem[51];
		scanf("%s",mem);

		int count = 0;
		int f = 0;
		for(int i = 0; mem[i]; i++)
		{
			if(f == 0)
			{
				if(mem[i] == '1')
				{
					count++;
					f = 1;
				}
			}
			else if(f == 1)
			{
				if(mem[i] == '0')
				{
					count++;
					f = 0;
				}
			}
		}
		printf("#%d %d\n",x,count);
	}
	return (0);
}
