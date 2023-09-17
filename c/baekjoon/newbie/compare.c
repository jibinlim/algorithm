#include <stdio.h>

int main(void)
{
	int i = 1;
	while(1)
	{
		int x,y;
		char z[3];
		int f = 0;

		scanf("%d",&x);
		scanf("%s",z);
		scanf("%d",&y);

		if(z[0] == 'E')
			break;
		else if(z[0] == '>')
		{
			if(z[1] == '=')
			{
				if(x >= y)
					f = 1;
			}
			else
				if(x > y)
					f = 1;
		}
		else if(z[0] == '<')
		{
			if(z[1] == '=')
			{
				if(x <= y)
					f = 1;
			}
			else
				if(x < y)
					f = 1;
		}
		else if(z[0] == '=')
		{
			if(x == y)
				f = 1;
		}
		else if(z[0] == '!')
		{
			if(x != y)
				f = 1;
		}
		
		if(f == 1)
			printf("Case %d: true\n",i);
		else
			printf("Case %d: false\n",i);
		i++;
	}
	return (0);
}
