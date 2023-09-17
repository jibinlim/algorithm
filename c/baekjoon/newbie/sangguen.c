#include <stdio.h>

int main(void)
{
	while(1)
	{
		int f;
		int m;
		scanf("%d %d",&m,&f);

		if(f == 0 && m == 0)
			break;

		printf("%d\n",f + m);
	}
	return (0);
}
