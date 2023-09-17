#include <stdio.h>

int main(void)
{
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int t;
	scanf("%d",&t);

	for(int zz = 0; zz < t; zz++)
	{
		int m1,m2,d1,d2;
		scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
		printf("#%d ",zz + 1);
		if(m1 == m2)
			printf("%d\n",d2 - d1 + 1);
		else
		{
			for(int i = m1; i < m2; i++)
				d2 += month[i - 1];
			printf("%d\n",d2 - d1 + 1);
		}
	}
	return (0);
}
