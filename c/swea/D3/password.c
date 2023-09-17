#include <stdio.h>

int main(void)
{
	for(int zz = 1; zz <= 10; zz++)
	{
		int t;
		scanf("%d",&t);

		int num[8];
		for(int i = 0; i < 8; i++)
			scanf("%d",&num[i]);

		while(1)
		{
			int minus = 1;
			int flag = 0;
			while(minus <= 5)
			{
				int temp = num[0] - minus;
				if(temp <= 0)
				{
					flag = 1;
					temp = 0;
				}
				for(int i = 0; i < 7; i++)
					num[i] = num[i + 1];
				num[7] = temp;
				if(flag == 1)
					break;
				minus++;
			}
			if(flag == 1)
				break;
		}
		printf("#%d ",zz);
		for(int i = 0; i < 8; i++)
			printf("%d ",num[i]);
		printf("\n");
	}
	return (0);
}
