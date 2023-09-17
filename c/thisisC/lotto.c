#include <stdio.h>

int in_num(int n, int a[6])
{
	for(int i = 0; i < 6; i++)
	{
		if (a[i] == 0)
			return (0);
		if (a[i] == n)
			return (1);
	}
	return (0);
}

int main()
{
	int lotto[6] ={0,0,0,0,0,0};
	int i = 1;
	printf("로또번호 입력:");
	scanf("%d",&lotto[0]);
	while(i < 6)
	{
		if(!in_num(lotto[i], lotto))
		{
			printf("로또번호 입력:");
			scanf("%d",&lotto[i]);
			i++;
		}
		else
		{
			printf("같은 번호가 있습니다\n");
			i--;
		}
	}

	printf("입력된 로또번호:");
	for(int i = 0 ; i < 6; i++)
	{
		printf("%3d",lotto[i]);
	}
	return (0);
}
