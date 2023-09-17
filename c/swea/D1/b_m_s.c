#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int zz = 0 ; zz < t; zz++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("#%d ",zz + 1);
		if(a < b)
			printf("<");
		else if(a > b)
			printf(">");
		else
			printf("=");
		printf("\n");
	}
	return (0);
}
