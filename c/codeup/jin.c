#include <stdio.h>

void to_bin(int n)
{
	char bin[3] = "01";
	char x[2001];
	int i = 0;
	while(n > 0)
	{
		x[i] = bin[n % 2];
		i++;
		n /= 2;
	}
	for(int j = i - 1; j >= 0; j--)
		printf("%c",x[j]);
	printf("\n");
}

void to_ox(int n)
{
	char ox[9] ="01234567";
	char x[2001];
	int i = 0;
	while(n > 0)
	{
		x[i] = ox[n % 8];
		i++;
		n /= 8;
	}
	for(int j = i - 1; j >= 0; j--)
		printf("%c",x[j]);
	printf("\n");
}

void to_hex(int n)
{
	char hex[17] = "0123456789ABCDEF";
	char x[2001];
	int i = 0;
	while(n > 0)
	{
		x[i] = hex[n % 16];
		i++;
		n /= 16;
	}
	for(int j = i - 1; j >= 0; j--)
		printf("%c",x[j]);
	printf("\n");
}

int main(void)
{
	int n;
	scanf("%d",&n);

	printf("2 ");
	to_bin(n);
	printf("8 ");
	to_ox(n);
	printf("16 ");
	to_hex(n);
	return (0);
}
