#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);

	for(int zz = 0; zz < t; zz++)
	{
		float avg = 0;
		int input = 0;

		for(int i = 0; i < 10; i++)
		{
			scanf("%d",&input);
			avg += input;
		}
		printf("#%d %.lf\n",zz + 1, avg / 10);
	}
	return (0);
}
