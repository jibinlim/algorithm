#include <stdio.h>

int main(void)
{
	char ju[15];

	scanf("%s",ju);

	char s;
	int x = 0;

	if(ju[7] == '1')
		s = 'M';
	if(ju[7] == '2')
		s = 'F';
	if(ju[7] == '4')
	{
		s = 'F';
		x = 1;
	}
	if(ju[7] == '3')
	{
		s = 'M';
		x = 1;
	}

	if(x == 1)
		printf("20");
	if(x == 0)
		printf("19");

	for(int i = 0; i <= 5; i++)
	{
		printf("%c",ju[i]);
		if(i == 1 || i == 3)
			printf("/");
	}
	printf(" %c",s);

	return (0);
}
